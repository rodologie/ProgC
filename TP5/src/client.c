/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>

#include "client.h"

/*
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */

int envoie_recois_message(int socketfd)
{

  char data[1024];
  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // Demandez à l'utilisateur d'entrer un message
  char message[1024];
  printf("Votre message (max 1000 caracteres): ");
  fgets(message, sizeof(message), stdin);
  strcpy(data, "message: ");
  strcat(data, message);

  int write_status = write(socketfd, data, strlen(data));
  if (write_status < 0)
  {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // lire les données de la socket
  int read_status = read(socketfd, data, sizeof(data));
  if (read_status < 0)
  {
    perror("erreur lecture");
    return -1;
  }

  printf("Message recu: %s\n", data );

  return 0;
}

int envoie_operateur_numeros(int socketfd) {
  char data[1024];
  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // Demandez à l'utilisateur d'entrer un message
  char message[1024];
  printf("Choisissez le type d'operation (-,+,*,/) et les chiffres à operer : ");
  fgets(message, sizeof(message), stdin);
  strcpy(data,"calcul: ");
  strcat(data, message);

  int write_status = write(socketfd, data, strlen(data));
  if (write_status < 0)
  {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // lire les données de la socket
  int read_status = read(socketfd, data, sizeof(data));
  if (read_status < 0)
  {
    perror("erreur lecture");
    return -1;
  }

  printf("Message recu: %s\n", data);

  return 0;
}
char concatenate_string(char* s, char* s1)
{
    int i;
  
    int j = strlen(s1);
  
    for (i = 0; s1[i] != '\0'; i++) {
        s[i + j] = s1[i];
    }
  
  
    return s[i+j];
}

int envoie_operateur_numeros_etudiant(int socketfd)
{
  char data[1024];
  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // char note1[100];
  // int fe,count,size;
  // fe = open("./etudiant/1/note1.txt", O_RDONLY); // ouverture du fichier : fichier.txt note1, note2, note3, et note4
  // size = read(fe, note1, sizeof(note1)); 
  // printf("size fe : %d \n", fe);
  // printf("size of size : %d \n",size);
  // printf("size of note : %lu \n",sizeof(note1));
  // printf("note : %s \n",note1);

  // int note1i = atoi(note1);
  // printf("note : %d \n",note1i);

  for(int i=1; i<5; i++)
  {
    char nom_dossier[30];
    
    sprintf(nom_dossier, "%s%d", "./etudiant/",i);

    for (int j=1 ; j<5; j++)
    {
      int fe, size,fe2,size2;

      char note1[10];
      //char note2[10];
      char nom_fichier1[20];
      char chemin[40];

      sprintf(nom_fichier1, "%s%d%s", "/note",j,".txt");
      
      // char nom_fichier2[20];
      // sprintf(nom_fichier2, "%s%d%s", "/note",j+1,".txt");
      //printf("taille sprintf : %lu \n",sizeof(e));

      strcat(chemin,nom_dossier);
      strcat(chemin, nom_fichier1);
      printf("nom fichier : %s \n", chemin);
      //fe = open(nom_dossier, O_RDONLY); // ouverture du fichier : fichier.txt note1, note2, note3, et note4
      //size = read(fe, note1, sizeof(note1)); 
    
      //printf("note : %s \n",note1);
      
  
      //close(fe);
      
    }
    
  }
  
  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // lire les données de la socket
  int read_status = read(socketfd, data, sizeof(data));
  if (read_status < 0)
  {
    perror("erreur lecture");
    return -1;
  }

  printf("Message recu: %s\n", data);

  return 1;
  
}

int main()
{
  int socketfd;

  struct sockaddr_in server_addr;

  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if (socketfd < 0)
  {
    perror("socket");
    exit(EXIT_FAILURE);
  }

  // détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  // demande de connection au serveur
  int connect_status = connect(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (connect_status < 0)
  {
    perror("connection serveur");
    exit(EXIT_FAILURE);
  }

  /* Demande de l'action à realiser au client */
  char action_utilisateur[3];
  printf("Voulez-vous envoyer un message (m), un calcul (c) ou calcul automatique (a) ? ");
  fgets(action_utilisateur, sizeof(action_utilisateur) ,stdin);

  // appeler la fonction pour envoyer un message au serveur
  if (action_utilisateur[0] == 'm') {
    envoie_recois_message(socketfd);
  }
  
  else if (action_utilisateur[0]=='c') {
    envoie_operateur_numeros(socketfd);
  }
  else if (action_utilisateur[0]=='a'){ 
    envoie_operateur_numeros_etudiant(socketfd);
  }
  
  
  else {
    printf("Saisie non reconnue");
  }
  close(socketfd);
}
