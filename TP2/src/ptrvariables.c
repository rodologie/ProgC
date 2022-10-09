#include <stdio.h>

int main()
{
    /* Nous donnons des valeurs à nos variables (valeurs comprises dans les limites disponibles) puis nous les affichons
     * à l'ecran en utilisant le bon code de conversion ! */

    int k;

    int a = 999;
    char *ptr1 = (char *)&a;    //on définit un pointeur d'adresse

    for (k=3; k>=0; k--){
        unsigned char ptr12 = *(ptr1 + k); //on définit un pointeur qui pointe les valeurs de l'adresse
        printf("%02x ", ptr12); // on affiche
    }
    printf("\n");

    // /!\ Le code est le même pour chaque type de variable, donc il n'est comenté qu'une seule fois

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    char b = 'b';
    char *ptr2 = (char *)&b;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr22 = *(ptr2 + k);
        printf("%02x ", ptr22);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    signed char c = 'c';
    char *ptr3 = (char *)&c;
    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr32 = *(ptr3 + k);
        printf("%02x ", ptr32);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    unsigned char d = 236; /* unsigned char => valeur de 0 a 255 */
    char *ptr4 = (char *)&d;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr42 = *(ptr4 + k);
        printf("%02x ", ptr42);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    short int e = -12;
    char *ptr5 = (char *)&e;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr52 = *(ptr5 + k);
        printf("%02x ", ptr52);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    unsigned short usign_var = 25;
    char *ptr6 = (char *)&usign_var;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr62 = *(ptr6 + k);
        printf("%02x ", ptr62);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int f = 5;
    char *ptr7 = (char *)&f;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr72 = *(ptr7 + k);
        printf("%02x ", ptr72);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    unsigned int usign_int_var = 36;
    char *ptr8 = (char *)&usign_int_var;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr82 = *(ptr8 + k);
        printf("%02x ", ptr82);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    long long_var = -2145635L;
    char *ptr9 = (char *)&long_var;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr92 = *(ptr9 + k);
        printf("%02x ", ptr92);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

        unsigned long ulong_var = 263598UL;
    char *ptr10 = (char *)&ulong_var;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr102 = *(ptr10 + k);
        printf("%02x ", ptr102);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    long long int g = 1859345LL;
    char *ptr11 = (char *)&g;

        for (k = 3; k >= 0; k--)
    {
        unsigned char ptr112 = *(ptr11 + k);
        printf("%02x ", ptr112);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    unsigned long long int ullong_var = 4789561ULL; /* Pour les longs éléments, il faut ajouter le code de conversion à la fin de la valeur */
    char *ptr13 = (char *)&ullong_var;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr132 = *(ptr13 + k);
        printf("%02x ", ptr132);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    float flottant = 3.4E12;
    char *ptr14 = (char *)&flottant;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr142 = *(ptr14 + k);
        printf("%02x ", ptr142);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    double doubl = 1.7E12;
    char *ptr15 = (char *)&doubl;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr152 = *(ptr15 + k);
        printf("%02x ", ptr152);
    }
    printf("\n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    long double long_double = 3.14E-22;
    char *ptr16 = (char *)&long_double;

    for (k = 3; k >= 0; k--)
    {
        unsigned char ptr162 = *(ptr16 + k);
        printf("%02x ", ptr162);
    }
    printf("\n");


    return 0;
}