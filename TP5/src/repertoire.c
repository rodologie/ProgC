#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "repertoire.h"
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include <time.h>


int lecture_dossier(char *chemin) {
    
    DIR *dirp = opendir(chemin);

    if (dirp == NULL) { //vérification pad de pb de chemin
        perror("opendir");
    }
    struct dirent * ent;

    while (1) // boucle infinie, on ne sort qu'une fois le break atteint
    {
        ent = readdir(dirp); //pointeur 
        if (ent == NULL){ //si fin
            break;
        }
        printf("%s\n", ent->d_name); //affichage du nom 
    }
    closedir(dirp); // ferme le flux 
    return(0);
    
}

void lecture_dossier_recursif(char *chemin)
{

    DIR *dirp = opendir(chemin);

    if (dirp == NULL)
    {
        perror("opendir");
        return ;
    }
    struct dirent *ent;

    while (1)
    {
        ent = readdir(dirp);
        if (ent == NULL)
        {
            break;
        }
        if (ent->d_name[0] == '.') //on s'affranchit du . présent dans chaque fichier
        {
            continue;
        }
        printf("%s\n", ent->d_name);
        if (ent -> d_type == DT_DIR) { //si on est sur un repertoire
            char path[500];
            strcpy(path, chemin);
            strcat(path,"/");
            strcat(path, ent->d_name); //concaténation des différentes parties qui forment le chemin
            lecture_dossier_recursif(path); // recursivité sur le chemin formé
            printf("\n");
        }
    }
    closedir(dirp);
}

void lecture_dossier_iteratif(char *chemin){
   int compteur = 1;
   DIR *dirp = opendir(chemin);

   if (dirp == NULL)
   {
       perror("opendir");
       return ;
   }
   
   struct dirent *ent;
   ent = readdir(dirp);
   char adresse_dir[256][256];
   int ptr_liste = 1;
   char copie[256] = ""; // on crée une chaine de caractères de taille importante pour accueillir l'adresse complète
   // on copie l'adresse complète dans la chaîne copie
   strcpy(copie, chemin);
   strcat(copie, "/");
   strcat(copie, ent->d_name);
   strcpy(adresse_dir[0], copie);
   closedir(dirp);
   int cpt2 = 0;

   while (compteur != 0)
   {
       DIR *dirp = opendir(chemin);

       while (1)
       {
           ent = readdir(dirp);

           if (ent == NULL)
           {
               compteur--;
               break;
           }

           if (strcmp(ent->d_name, "..") == 0)
           {
               continue;
           }

           if (strcmp(ent->d_name, ".") == 0)
           {
               continue;
           }

           if (ent->d_type == DT_DIR) // si on est sur un dossier
           { 
               printf("chemin %s\n", ent->d_name);
               strcpy(copie, chemin); // on copie l'adresse complète dans la chaîne copie
               strcat(copie, "/");
               strcat(copie, ent->d_name);
               strcpy(adresse_dir[ptr_liste], copie);
               ptr_liste++;
               compteur++;
               printf("\n");
            }
            printf("%s\n", ent->d_name);
            printf("\n");
       }
        sleep(2);
        closedir(dirp);
        strcpy(chemin, adresse_dir[cpt2]);
        cpt2++;
   }
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: readdir path\n");
        return (EXIT_FAILURE);
    }
    lecture_dossier_recursif(argv[1]); //  changer le nom de la fonction pour vérifier l e bon fonctionnement de chacune d'elles
    return 0;
}