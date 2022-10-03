#include <stdio.h>

int main() {

    int rand();
    int k,j;
    int tableau_init[100];
    int inter;

    for (k = 0; k < sizeof(tableau_init) / sizeof(int); k++){
        tableau_init[k] = rand()%100; /* Parcourt de tous les indices du tableau pour assigner une valeur à chaque élément*/
    }

    for (k=99; k> 0; k--){
        for (j=98; j > 0; j--){
            if (tableau_init[j]>tableau_init[j+1]){
                inter = tableau_init[j+1];
                tableau_init[j+1]=tableau_init[j];
                tableau_init[j] = inter;
            }
        }
    }
    printf("Tableau trié:"); 
    
    for (k = 0; k < sizeof(tableau_init) / sizeof(int); k++)
    {
        printf("%i\n", tableau_init[k]); /* Parcourt de tous les indices du tableau pour assigner une valeur à chaque élément*/
    }
    return 0;
}
