
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

char ecrire_dans_fichier(char* nom_fichier,char *message ) { // Les arguments sont des pointeurs
    FILE *fd = fopen(nom_fichier,"w");
    fprint(fd,"%s",message);
    fclose(fd);
};
struct Etudiant{
/* Creation la structure avec les donnees qui nous interessent */
    char prenom[50];
    char nom[50];
    char addresse[100];
    short notes[10];
};

int main() {
    struct Etudiant ETI[5];
    
   for (int i =0 ; i<2 ; i++){

        char nom[15];
        printf("Entrez un nom : ");
        scanf("%[^\n]%*c",nom);

        char prenom[10];
        printf("Entrez un prenom : ");
        scanf("%[^\n]%*c",prenom);

        char addresse[30];
        printf("Entrez une addresse : ");
        scanf("%[^\n]%*c",addresse);

        char notes[3];
        printf("Entrez une note : ");
        scanf("%[^\n]%*c",notes);
        
        strcpy(ETI[i].prenom, prenom);
        strcpy(ETI[i].nom , nom);
        strcpy(ETI[i].addresse,addresse);
        strcpy(ETI[i].notes,notes);
        
    }


    int k;
    for(k=0; k< sizeof(ETI); k++) { // JE NE SAIS PAS COMMENT FAIRE POUR QUE LA STRUCT DEVIENNE UN CHAR ET QUE JE PUISSE LES ECRIRE :)
        ecrire_dans_fichier("./etudiant_bd2.txt",ETI[k].nom);
        ecrire_dans_fichier("./etudiant_bd2.txt",ETI[k].prenom);
        ecrire_dans_fichier("./etudiant_bd2.txt", ETI[k].addresse);
        ecrire_dans_fichier("./etudiant_bd2.txt",ETI[k].notes);
        ecrire_dans_fichier("./etudiant_bd2.txt"," \n");
    }
    
    
    return 0;
}

