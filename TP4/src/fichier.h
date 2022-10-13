#include <stdio.h> 
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

// Declaration des fonctions
char lire_fichier(char *nom_fichier, FILE* fd); 

char ecrire_dans_fichier(char *nom_fichier,  char *message );
