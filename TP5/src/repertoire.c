#include <stdio.h>
#include <stdlib.h>
#include "repertoire.h"
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>


int lecture_dossier(char *chemin) {
    
    DIR *dirp = opendir(chemin);

    if (dirp == NULL) {
        perror("opendir");
        return (EXIT_FAILURE);
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

int lecture_dossier_recursif(char *chemin)
{

    DIR *dirp = opendir(chemin);

    if (dirp == NULL)
    {
        perror("opendir");
        return (EXIT_FAILURE);
    }
    struct dirent *ent;

    while (1)
    {
        ent = readdir(dirp);
        if (ent == NULL)
        {
            break;
        }
        printf("%s\n", ent->d_name);
        lecture_dossier_recursif(ent->d_name);
    }
    closedir(dirp);
    return (0);
}


int main(int argc, char **argv){
    if (argc < 2)
    {
        printf("Usage: readdir path\n");
        return (EXIT_FAILURE);
    }
    int status = lecture_dossier_recursif(argv[1]);
    return status;
}