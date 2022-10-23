#include <stdio.h>
#include <stdlib.h>
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
       for (int j= 0; j < sizeof(phrase); j++)
            if (content[count]== phrase[j]) 
            {
                cptM = cptM +1;
            }
            if( sizeof(content) == cptM )
            {
                cptL = cptL +1;
            }
        printf("Il y a %d lignes d'identiques : \n", cptL);
        printf("Il y a %d mots de la phrase identiques : \n", cptM);
    }
    close(fd);
    
    return 0;
}
int main()
{
    char phrase[100];
    printf("Quelle phrase/ mot souhaitez-vous chercher ? : \n");
    fgets(phrase,100,stdin);

    chercher_fichier("./texteRecherche.txt",phrase);
}