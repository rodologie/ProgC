#include <stdio.h>

int main() {
    int init_value_u = 1000;
    int divid_two_value = 15;
    int i;
    for(i=init_value_u; i>0;i-- )  {
        /* Dans cette boucle for, nous affichons tous les entiers divisibles par 2 ET 15 en partant
        * de 1000 et decrementant. 
        * Nous verifions d'abord que l'entier N'est PAS divisible par 15 puis nous "continuons", ce qui a pour
        * effet de ne pas passer par la condition d'apres car s'il n'est pas divisible par 15, nous n'avons
        * pas besoin de verifier qu'il est aussi divisible par 2 */
        if (i % divid_two_value != 0){
            continue;
        }
        if(i % 2 ==0) {
             printf("valeurs divisibles par 2 et 15 : %u \n",i);
        }
        }
    
    int j; /* ou init_value_u = 1000 et j= init_value_u pour l'initialisation du for */
    for (j=1000; j>0; j-- ) {
        /* Pour la fonction OU, nous verifions la condition entier divisible par 103, s'il l'est, nous decrementons car il nous suffit
        * que l'entier soit divisible par 103 pour qu'il fasse partie de la liste (pas de creation de listes ici). En revanche, s'il ne l'est pas, nous devons verifier 
        * qu'il est bien divisible par 107 pour etre affiche. */ 
         if (j % 103 == 0)  {
            printf("valeurs divisibles par 103 OU 107 : %u \n",j);
            continue; 
         }
         if (j%107 ==0) {
            printf("valeurs divisibles par 103 OU 107 : %u \n",j);
         }
    }

    init_value_u =1000;
    int k ;
    for(k= init_value_u ; k>0; k--) {
        /* même principe que pour "103 OU 107", sauf que nous verifions en plus que l'entier N'est PAS divisible par 3 */
        if (k % 7 ==0){
            if (k % 3 !=0) {
                printf("Divisible par 7 OU 5 mais pas par 3 : %u \n", k);
                continue;
        }
        }
        if (k % 5 ==0){
            if (k% 3 !=0) {
                printf("Divisible par 7 OU 5 mais pas par 3 : %u \n", k);
            }
        }
        
    } 

return 0;
}