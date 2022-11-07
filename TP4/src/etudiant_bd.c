
/*En réutilisant le code de l'*ETIdiant2.c* (TP2) et *fichier.c*, écrivez
un fichier *ETIdiant_bd.c* qui sauvegarde les noms, prénoms, adresses,
et les notes dans un fichier ETIdiant.txt pour 5 étudiant(e)s (une ligne
pour chaque étudiant(e)). Testez votre code. Cette fois, vous demanderez
à l'utilisateur en utilisant scanf pour les détails de chaque étudiant.
Par exemple, ETIdiant.txt */

#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "fichier.h"

char ecrire_dans_fichier(char *nom_fichier, char *message)
{ // Les arguments sont des pointeurs
    FILE *fd;
    fd = fopen(nom_fichier, "a"); // ouverture en mode ecriture fin de fichier
    fputs(message, fd); // on ecrit le message
    fclose(fd); //on ferme le fichier
    return 0;
};
struct Etudiant
{
    /* Creation la structure avec les donnees qui nous interessent */
    char prenom[80];
    char nom[80];
    char addresse[80];
    char notes[50];
};

int main()
{
    struct Etudiant ETI[5];
    // ajouter une variable intermédiaire pour ne pas perdre le contenu
    for (int i = 0; i < 5; i++)
    {

        char ligne[1000] = ""; //initialisation de la ligne pour chaque itération de la boucle (on ne veut les informations que sur une seule ligne)
        char nom[80];
        printf("Entrez un nom : ");
        scanf("%[^\n]%*c",nom); //entrée du nom en ligne de commande
        strcpy(ETI[i].nom, nom); // copie du nom dans la structure étudiant
        strcat(ligne, ETI[i].nom);
        strcat(ligne, ", ");

        char prenom[80];
        printf("Entrez un prenom : ");
        scanf("%[^\n]%*c",prenom);
        strcpy(ETI[i].prenom, prenom);
        strcat(ligne, ETI[i].prenom);
        strcat(ligne, ", ");

        char addresse[80];
        printf("Entrez une addresse : ");
        scanf("%[^\n]%*c",addresse);
        strcpy(ETI[i].addresse, addresse);
        strcat(ligne, ETI[i].addresse);
        strcat(ligne, ", ");

        char notes[50];
        printf("Entrez une note : ");
        scanf("%[^\n]%*c",notes);
        strcpy(ETI[i].notes, notes);
        strcat(ligne, ETI[i].notes);
        strcat(ligne, "\n"); //fin de la ligne de l'étudiant donc on retourne à la ligne avant l'étudiant suivant

        
        ecrire_dans_fichier("./etudiant.txt", ligne);  //On écrit la ligne dans le fichier etudiant.txt /!\ attention à ne pas déplacer le fichier étudiant.txt ou alors changer le hcemin d'accès lors de lappel de la fonction
    }

    return 0;
}
