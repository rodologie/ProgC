#include <stdio.h>

int main() {
/* Nous donnons des valeurs à nos variables (valeurs comprises dans les limites disponibles) puis nous les affichons
* à l'ecran en utilisant le bon code de conversion ! */
    signed char a = 'i';
    printf("signed char: %c \n", a ); /* Ne pas oublier de choisir le bon code de conversion */

    unsigned char b =  236;  /* unisgned char => valeur de 0 a 255 */
    printf("unsigned char : %hhu \n", b); 

    short int c = -12;
    printf("short int : %hd \n",c);

    unsigned short usign_var = 25;
    printf("short int : %hu \n", usign_var);

    int d = 5;
    printf("int : %d \n",d);

    unsigned int usign_int_var = 36;
    printf("unsigned int : %u \n", usign_int_var);

    long  long_var = -2145635L ; 
    printf("long int : %lu \n", long_var);
    
    unsigned long ulong_var = 263598UL;
    printf("unsigned long : %lu \n", ulong_var) ;

    long long int f= 1859345LL; 
    printf("long long int : %lld \n", f);

    unsigned long long int ullong_var= 4789561ULL;  /* Pour les longs éléments, il faut ajouter le code de conversion à la fin de la valeur */
    printf("unsigned long long int : %llu \n", ullong_var);

    float flottant = 3.4E12;
    printf("float : %f \n", flottant);

    double doubl = 1.7E12 ;
    printf("double : %g \n", doubl);

    long double long_double = 3.14E-22;
    printf("long double : %Lg \n",long_double);

    

    
    return 0;
}