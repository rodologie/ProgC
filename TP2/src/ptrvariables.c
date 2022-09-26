#include <stdio.h>

int main()
{
    /* Nous donnons des valeurs à nos variables (valeurs comprises dans les limites disponibles) puis nous les affichons
     * à l'ecran en utilisant le bon code de conversion ! */
    signed char a = 'i';
    int *aa = &a; 
    printf("%02x ", aa);
    printf("\n");

    unsigned char b = 236; 
    int *bb = &b;
    printf("%02x ", bb);
    printf("\n");

    short int c = -12;
    int *cc = &c;
    printf("%02x ", cc);
    printf("\n");

    unsigned short usign_var = 25;
    int *using_var2 = &usign_var;
    printf("%02x ", using_var2);
    printf("\n");

    int d = 5;
    int *dd = &d;
    printf("%02x ", dd);
    printf("\n");

    unsigned int usign_int_var = 36;
    int *usign_int_var2 = &usign_int_var;
    printf("%02x ", usign_int_var2);
    printf("\n");

    long long_var = -2145635L;
    int *long_var2 = &long_var;
    printf("%02x ", long_var2);
    printf("\n");

    unsigned long ulong_var = 263598UL;
    int *ulong_var2 = &ulong_var;
    printf("%02x ", ulong_var2);
    printf("\n");

    long long int f = 1859345LL;
    int *ff =  &f;
    printf("%02x ", ff);
    printf("\n");

    unsigned long long int ullong_var = 4789561ULL; /* Pour les longs éléments, il faut ajouter le code de conversion à la fin de la valeur */
    int *ullong_var2 = &ullong_var;
    printf("%02x ", ullong_var2);
    printf("\n");

    float flottant = 3.4E12;
    int *flottant2 = &flottant;
    printf("%02x ", flottant2);
    printf("\n");

    double doubl = 1.7E12;
    int *doubl2 = &doubl;
    printf("%02x ", doubl2);
    printf("\n");

    long double long_double = 3.14E-22;
    int *long_double2 = &long_double;
    printf("%02x ", long_double2);
    printf("\n");

    return 0;
}