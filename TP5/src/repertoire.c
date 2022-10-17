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


int main(int argc, char **argv){
    if (argc < 2)
    {
        printf("Usage: readdir path\n");
        return (EXIT_FAILURE);
    }
    lecture_dossier_recursif(argv[1]);
     return 0;
}