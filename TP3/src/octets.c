/* Écrivez un programme en créant le fichier *octets.c* et utilisant char
* et les opérateurs de pointeurs pour voir les octets d'une variable
short, int, long int, float, double et long double. */

#include <stdio.h>


int main() {
/* Definition des variables short, int, long int, float, double et long double */
    short variable_short = 0xa478;
    int entier = 0xa47865ff;
    long int entier_long = 0xa47865ff;
    float variable_float = 150.648;
    double variable_double = 3E9;
    long double variable_long_double =  2E-12;

/* Declaration des pointeurs */
    short *ptr_short= (char *)&variable_short;
    int* ptr_entier= (char *)&entier;
    long int* ptr_li= (char *)&entier_long;
    float* ptr_f= (char *)&variable_float;
    double* ptr_d= (char *)&variable_double;
    long double* ptr_ld= (char *)&variable_long_double;

/* pointeur pouvant se deplacer d'octets en octet sans sauter toutes les valeurs */
    char* ptr_mobile;

    int k;
    for(k=0;k<sizeof(short);k++) {
        printf("valeur des octets de short : %s \n",);
    }
}

