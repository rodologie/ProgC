/* Codez en C un programme *grand_petit.c* qui créer un tableau de 100
entiers et calculer

-   a) Le numéro plus grand
-   b) Le numéro plus petit

N'utilisez pas scanf. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rand();
    int k;
    int tableau[10]={2,3,5,3,2,1,7,9,10,4};
    
    
    for(k=0 ;k<100 ;k++) {
        tableau[k] = rand() ;
        printf("tableau de 100 entiers : %c \n", tableau[k]);
    
        int *ptr_grand=tableau[0];
        int *ptr_deplacement;
        if (*ptr_deplacement> *ptr_grand) {

            *ptr_grand = *ptr_deplacement;
            *ptr_deplacement = tableau[j+1];
            j++;
        }
    }

return 0;
}