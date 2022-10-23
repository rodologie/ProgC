/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <sys/types.h>
#include <sys/socket.h>
//#include <sys/epoll.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "serveur.h"

/* renvoyer un message (*data) au client (client_socket_fd)
 */
int renvoie_message(int client_socket_fd, char *data)
{
  int data_size = write(client_socket_fd, (void *)data, strlen(data)); // ecriture vers le client

  if (data_size < 0)
  {
    perror("erreur ecriture");
    return (EXIT_FAILURE);
  }
  return (EXIT_SUCCESS);
}

/* accepter la nouvelle connection d'un client et lire les données
 * envoyées par le client. En suite, le serveur envoie un message
 * en retour
 */
int recois_envoie_message(int socketfd)
{
  struct sockaddr_in client_addr;
  char data[1024];
  char data_back[1024];

  unsigned int client_addr_len = sizeof(client_addr);

  // nouvelle connection de client
  int client_socket_fd = accept(socketfd, (struct sockaddr *)&client_addr, &client_addr_len);
  if (client_socket_fd < 0)
  {
    perror("accept");
    return (EXIT_FAILURE);
  }

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));
  memset(data_back, 0, sizeof(data_back));

  // lecture de données envoyées par un client
  int data_size = read(client_socket_fd, (void *)data, sizeof(data));

  if (data_size < 0)
  {
    perror("erreur lecture");
    return (EXIT_FAILURE);
  }

  /*
   * extraire le code des données envoyées par le client.
   * Les données envoyées par le client peuvent commencer par le mot "message :" ou le mot "calcul: " .
   */
  printf("Message recu: %s\n", data); // Reception du message client.
  char code[10];
  sscanf(data, "%s:", code); // Recuperation du premier mot de la chaine de caractere : "message: " ou "calcul: "

  if(strcmp(code,"message:")==0)  // Condition pour renvoyer un message, il faut que le client ait envoyé une demande de message debutant par "message:"
  {
    /* Demande du message a renvoyer : */
    char message_back[1024];
    printf("Quel message voulez-vous envoyer ? :");
    fgets(message_back,sizeof(message_back),stdin);
    strcat(data_back, message_back); /* on copie le message dans data_back */

    int write_status = write(client_socket_fd, data_back, strlen(data_back)); /* Mode ecriture dans la socket */
    if (write_status < 0)
    {
      perror("erreur ecriture");
      exit(EXIT_FAILURE);
    }

    if (strcmp(data_back, "message retour:") == 0) // Condition pour renvoyer un message au client
    {
      renvoie_message(client_socket_fd, data_back); 
    }
  }

  else if(strcmp(code,"calcul:")== 0) // Idem que pour la première condition mais cette fois le client demande un calcul // /!\ attention à l'espace entre les : et les guillemets ! => Il n'en faut pas
  {
    recois_numeros_calcule(client_socket_fd,data); // Fonction qui effectue le calcul
  }

  else {
    printf("Erreur de compréhension \n");
  }
  
  // fermer le socket
  close(socketfd);
  return (EXIT_SUCCESS);
}

int recois_numeros_calcule(int socketfd, char *data) 
{
  float res;
  float num1, num2;  // Déclaration des variables flottantes permettant le calcul
  char op[2], code[100]; // Déclaration du premier caractere de la chaine envoyée par le client : -,+,/, ou * et du code "calcul: "
  sscanf(data,"%s%s%f%f", code,op,&num1, &num2); // Recuperation des infos de la chaine de caractere et placement dans la bonne variable
    
  switch (op[0]){
    case '+':  res = num1 + num2;  // addition
      break;
    case '-':  res = num1 - num2;  // soustraction
      break;
    case '/':  res = num1/num2;  // division
      break;
    case '*':  res = num1*num2;  // multiplication
      break;
  }

  char Value[100] ;
  sprintf(Value,"%f",res); // permet de convertir en chaine de caractere
  renvoie_message(socketfd, Value); // Demande à la fonction adequate de renvoyer le resultat au client
  return 0;
}
int main()
{

  int socketfd;
  int bind_status;

  struct sockaddr_in server_addr;

  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if (socketfd < 0)
  {
    perror("Unable to open a socket");
    return -1;
  }

  int option = 1;
  setsockopt(socketfd, SOL_SOCKET, SO_REUSEADDR, &option, sizeof(option));

  // détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  // Relier l'adresse à la socket
  bind_status = bind(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (bind_status < 0)
  {
    perror("bind");
    return (EXIT_FAILURE);
  }

  // Écouter les messages envoyés par le client
  listen(socketfd, 10);
  recois_envoie_message(socketfd);

  return 0;
}
