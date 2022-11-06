#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"

char chercher_fichier(char *nom_fichier, char* phrase)
{
     // Fonction renvoyant comparant la phrase utilisateur avec les caracteres presents dans le fichier 
    char content[2000]; // Definition  du contenu du fichier de 2000 caracteres max
    int fd,count, size; // declaration des entiers utiles
    FILE* fd2;
    fd = open (nom_fichier, O_RDONLY); // ouverture du fichier : fichier.txt
    fd2 = fopen(nom_fichier, "r");
    size = read(fd, content, sizeof(content)); 
    printf("taille fd : %lu \n", sizeof(fd));
    printf("taille size : %lu \n", sizeof(size));
    int cptL =0;
    int cptM =0; 
    int k=0;
    char *mot;
    for (count = 0; count < 50; count ++) {
        mot = fgets(content,sizeof(content),fd2); // On récupère chaque ligne du fichier et on les place dans mot

        if(content[count]!= ';' || content[count] != '{') { // on compte le nombre de ligne
            cptL ++;

        }
        
        for (int i=0 ; i < strlen(mot); i++ ) { 
            for (int k=0 ; k<strlen(phrase);k++) {
                if(mot[i]==phrase[k]) // On compare caractere par caractere que le mot est égal à la phrase 
                {
                    cptM = cptM +1; // chaque fois qu'un caractere est identique, le compteur est incrementé.
                }
                
            }
        }
        
    
    
        if(strlen(phrase)==cptM) // si la longueur de la phrase recherchée est égale à l'entier du compteur de mot alors la phrase est dans la ligne
        {
            printf("Le mot apparait à la ligne %d : \n", cptL); // On affiche la ligne à laquelle on est 
            printf("Il y a %d mots de la phrase identiques \n", cptM); 
        }
        
        
        printf("count %d \n",count);
        printf("content : %s \n", mot);
        
    }
    close(fd);
    
    return 0;
}
int main(int argc, char *argv[])
{
    // printf("Quelle phrase/ mot souhaitez-vous chercher ? : \n");
    // fgets(phrase,100,stdin);
    //char *fichierRech = argv[2];
    char phrase[]="int";
    
    chercher_fichier("./calcule.c", phrase);
}