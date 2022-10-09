#include <stdio.h>

int main() {
    int U0 = 0;
    int U1 = 1; /* definition des variables de debut */
    
   int U_next;

   for (int n = 19; n > 1; n--)
   {
       U_next = U1 + U0; /*calcul du terme de Fibonacci */
       U0 = U1;
       U1 = U_next; /* changement des valeurs des variables n-1 et n-2 */
       printf("les n termes de la suite de Fibonacci sont : %i \n ",  U_next);
   }

return 0;
}