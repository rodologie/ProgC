/* FONCTIONNE PAS */

#include <stdio.h>

int main() {

    int tableau1[7] = {1,2,5,6,7,8,9};
    float tableau2[8]= {1,2.3,4,7.6,8.1,2.36,5,6.45};

    int *ptr1; /* déclaration du pointeur du tableau d'entier */
    float *ptr2 ; /* déclaration du pointeur du tableau avec les flottants */

    int k;
    for(k=0; k<sizeof(tableau1)/sizeof(int);k++) {  /* On parcourt le tableau 1 */
        
        ptr1 = &(tableau1[k]);  /* On definit le pointeur ptr1 avec les valeurs du tableau 1 */
        if(k%2 ==0 ){  /* L'inde est-il divisible par 2 ?  --> Pas reussi à prendre l'adresse memoire de la kième valeur du tableau avec le pointeur pour tester */
            *ptr1 = *ptr1 * 3;  /* Multiplication par 3 du pointeur */
            printf("Tab 1 :Le %i eme indice est divisible par 2, sa valeur est : %i \n",k, *ptr1);
        }
       
    }
    int j;
    for(j=0; j<sizeof(tableau2)/sizeof(int);j++) { /* Fonctionnement identique au tableau 1 */
        ptr2=&(tableau2[j]) ;
        if (j%2 ==0){
            *ptr2= *ptr2 * 3;
            printf("Tab 2 :Le %i  eme indice est divisible par 2, sa valeur est : %f \n", j,*ptr2);
        }

    }

return 0;
}