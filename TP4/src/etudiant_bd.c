
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
    // char content[500]; // Declaration d'une variable content qui contient la chaine de caractere du message de longueur 500 max
    // strcpy(content, message) ; // Copie de la chaine de caractere message dans content

    FILE *fd;
    fd = fopen(nom_fichier, "a");
    // size = write(fd, content, strlen(content));
    /* Ecriture uniquement de la longueur de la chaine de caractere grâce à "strlen"  --> sizeof() completait avec des caracteres aleatoires pour obtenir la longueur declaree ligne 27 */
    fputs(message, fd);
    fclose(fd);
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

        char ligne[1000] = "";
        char nom[80];
        printf("Entrez un nom : ");
        scanf("%[^\n]%*c",nom);
        // fgets(nom, 80, stdin);
        strcpy(ETI[i].nom, nom);
        // ETI[i].nom[strlen(ETI[i].nom) - 1] = '\0';
        strcat(ligne, ETI[i].nom);
        strcat(ligne, ", ");

        char prenom[80];
        printf("Entrez un prenom : ");
        scanf("%[^\n]%*c",prenom);
        // fgets(prenom, 80, stdin);
        strcpy(ETI[i].prenom, prenom);
        // ETI[i].prenom[strlen(ETI[i].prenom) - 1] = '\0';
        strcat(ligne, ETI[i].prenom);
        strcat(ligne, ", ");

        char addresse[80];
        printf("Entrez une addresse : ");
        scanf("%[^\n]%*c",addresse);
        // fgets(addresse, 80, stdin);
        strcpy(ETI[i].addresse, addresse);
        // ETI[i].addresse[strlen(ETI[i].addresse) - 1] = '\0';
        strcat(ligne, ETI[i].addresse);
        strcat(ligne, ", ");

        char notes[50];
        printf("Entrez une note : ");
        scanf("%[^\n]%*c",notes);
        // fgets(notes, 50, stdin);
        strcpy(ETI[i].notes, notes);
        // ETI[i].notes[strlen(ETI[i].notes) - 1] = '\0';
        strcat(ligne, ETI[i].notes);
        strcat(ligne, "\n");

        
        ecrire_dans_fichier("./etudiant.txt", ligne);
    }

    return 0;
}
