#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    char nom;
 
    printf("Quel est votre nom ? ");
    fgets(&nom, 10, stdin);
    printf("Ah ! Vous vous appelez donc %c !\n\n", nom);
    
    if(nom == 'e') {
        char valeur[10];
        printf("choisissez une valeur : \n");
        fgets(valeur,10,stdin);
    }
 
    return 0;
}