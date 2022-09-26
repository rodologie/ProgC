/*La suite de Fibonacci est une suite d'entiers définie comme suit :

-   U0=0
-   U1=1
-   Un= Un-1 + Un-2

Écrivez le code *fibonacci.c* qui affiche les n termes de la suite de
Fibonacci U0, U1, U2,...Un. */

#include <stdio.h>

int main() {
    int n= 19; /* choix du nombre d'iterations */
    int U0 = 0;
    int U1 = 1; /* definition des variables de debut */
    
   int U_next;
    
    for(n; n>1; n--) {
        U_next = U1 + U0; /*calcul du terme de Fibonacci */
        U0 = U1;
        U1 = U_next; /* changement des valeurs des variables n-1 et n-2 */
        printf("les n termes de la suite de Fibonacci sont : %i \n ", U_next);
    }

return 0;
}