/* Écrivez un programme en créant le fichier *octets.c* et utilisant char
* et les opérateurs de pointeurs pour voir les octets d'une variable
short, int, long int, float, double et long double. */

#include <stdio.h>


int main() {
/* Definition des variables short, int, long int, float, double et long double */
    short variable_short = 25;
    int entier = 0xa47865ff;
    long int entier_long = 0xa47865ff;
    float variable_float = 1;
    double variable_double = 3E9;
    long double variable_long_double =  2E-12;

/* Declaration des pointeurs  en char pour pouvoir se deplacer dans les differents octets des valeurs*/
    char* ptr_short=  (char *)&variable_short; /* char* = (char*) pointe les caracteres de l'adresse */
    char* ptr_entier= (char *)&entier;
    char* ptr_li= (char *)&entier_long;
    char* ptr_f= (char *)&variable_float;
    char* ptr_d= (char *)&variable_double;
    char* ptr_ld= (char *)&variable_long_double;


    int k;
    
    for(k=sizeof(short)-1;k>0;k--) { /* On met -1 pour arriver à l'octet 0 */
        printf("valeur des octets %i de short : %x \n", k,*(ptr_short+k));
    }
    printf("\n");
// ======================================================================================================
    for(k=sizeof(int)-1;k>0;k--) {
        printf("valeur des octets %i de int : %x \n",k, *(ptr_entier+k));
    }
    printf("\n");
// ======================================================================================================
    for(k=sizeof(long int)-1;k>0;k--) {
        printf("valeur des octets %i de long int : %x \n",k, *(ptr_li +k));
    }
    printf("\n");
// =======================================================================================================
    for(k=sizeof(float)-1;k>0;k--) {
        printf("valeur des octets %i de float : %x \n",k, *(ptr_f +k));
    }
    printf("\n");
// =======================================================================================================
    for(k=sizeof(double)-1;k>0;k--) {
        printf("valeur des octets %i de double : %x \n",k, *(ptr_d +k));
    }
    printf("\n");
// ========================================================================================================
    for(k=sizeof(long double)-1;k>0;k--) {
        printf("valeur des octets %i de long double : %x \n",k, *(ptr_ld +k));

    }

return 0;
}

