#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    char action;
    printf("Voulez vous lire (l) ou ecrire (e) le fichier ? \n");
    fgets(&action,2,stdin); 
    printf("Vous avez choisi la lettre : %c \n\n", action);
    

    if(action == 'e'){           
        char valeur[10];
        printf("choisissez une valeur : \n");
        fgets(valeur,10,stdin);
            
    }

    return 0;
}