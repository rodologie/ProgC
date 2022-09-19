#include <stdio.h>

int main() {
    /* Nous utilisons sizeof qui nous renvoie la taille en octets d'un type de donnees. Ce type est en UNSIGNED LONG. */
     
    unsigned long int a= sizeof(signed char);
    printf("sizeof(signed char) : %lu \n",a);

    printf("sizeof(unsigned char): %lu \n",sizeof(unsigned char)); 
    /* bonne pratique car question posee chaque annee. Type a utiliser avec sizeof = unsigned long d'ou le "%lu" */
    
    printf("sizeof(short) : %lu \n",sizeof(short));
    printf("sizeof(int) : %lu \n",sizeof(int));
    printf("sizeof(long int) : %lu \n",sizeof(long int));
    printf("sizeof(long long int) : %lu \n",sizeof(long long int));
    printf("sizeof(float) : %lu \n", sizeof(float));

    printf("sizeof(double) : %lu \n", sizeof(double));

    printf("sizeof(long double) : %lu \n", sizeof(long double));

    
    return 0;
}