#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"

char chercher_fichier(char *nom_fichier, char* phrase)
{
     // Fonction renvoyant comparant la phrase utilisateur avec les caracteres presents dans le fichier 
    char content[2000]; // Definition  du contenu du fichier de 2000 caracteres max
    int fd, count, size; // declaration des entiers utiles
    fd = open (nom_fichier, O_RDONLY); // ouverture du fichier : fichier.txt
    size = read(fd, content, sizeof(content)); 
    int cptL =0;
    int cptM =0; 
    for (count = 0; count < size; count ++) {
            if (strcmp(phrase,content) == 0)
            {
                cptM = cptM +1;
            }
            if( sizeof(content) == cptM )
            {
                cptL = cptL +1;
            }
        printf("Il y a %d lignes identiques : \n", cptL);
        printf("Il y a %d mots de la phrase identiques : \n", cptM);
    }
    close(fd);
    
    return 0;
}
int main(int argc, char *argv[])
{
    // printf("Quelle phrase/ mot souhaitez-vous chercher ? : \n");
    // fgets(phrase,100,stdin);
    char *fichierRech = argv[2];
    chercher_fichier("calcule.c","int");
}