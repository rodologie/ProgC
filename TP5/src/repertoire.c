#include <stdio.h>
#include <stdlib.h>
#include "repertoire.h"
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>


int lecture_dossier(char *chemin) {
    
    DIR *dirp = opendir(chemin);

    if (dirp == NULL) {
        perror("opendir");
        // return (EXIT_FAILURE);
    }
    struct dirent * ent;

    while (1)
    {
        ent = readdir(dirp);
        if (ent == NULL){
            break;
        }
        printf("%s\n", ent->d_name);
    }
    closedir(dirp);
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
        if (ent->d_name[0] == '.')
        {
            continue;
        }
        printf("%s\n", ent->d_name);
        if (ent -> d_type == DT_DIR) {
            char path[500];
            strcpy(path, chemin);
            strcat(path,"/");
            strcat(path, ent->d_name);
            lecture_dossier_recursif(path);
            printf("\n");
        }
    }
    closedir(dirp);
}

void lire_dossier_iteratif(char *chemin){
   /*  DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
           printf("%s\n", dir->d_name);
        }
        closedir(d);
        
    } */
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

           if (ent->d_type == DT_DIR)
           { // si on est sur un dossier
               printf("chemin %s\n", ent->d_name);
               // on copie l'adresse complète dans la chaîne copie
               strcpy(copie, chemin);
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

       closedir(dirp);
       strcpy(chemin, adresse_dir[cpt2]);
       cpt2++;
   }
}

int main(int argc, char **argv){
    if (argc < 2)
    {
        printf("Usage: readdir path\n");
        return (EXIT_FAILURE);
    }
    lire_dossier_iteratif(argv[1]);
     return 0;
}