#include <stdio.h>

int main() {
/* Renvoie la taille en octet des pointeurs */
    printf("sizeof(int) : %lu  octets \n",sizeof (int) );
    printf("sizeof (int *) : %lu octets \n",sizeof (int *) );
    printf("sizeof (int **) : %lu octets \n",sizeof (int **) );
    printf("sizeof (char *) : %lu  octets \n",sizeof (char *) );
    printf("sizeof (char **) : %lu  octets \n",sizeof (char **) );
    printf("sizeof (char ***) : %lu  octets \n",sizeof (char ***) );
    printf("sizeof (float *) : %lu  octets \n",sizeof (float *) );
    printf("sizeof (float **) : %lu  octets \n",sizeof (float **) );
    printf("sizeof (float ***) : %lu octets \n",sizeof (float ***) );

    return 0;
}



