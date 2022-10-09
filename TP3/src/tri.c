#include <stdio.h>

int main() {

    int rand();
    int k,j;
    int tableau_init[100];
    int inter;

    for (k = 0; k < sizeof(tableau_init) / sizeof(int); k++){
        tableau_init[k] = rand()%100; /* Parcourt de tous les indices du tableau pour assigner une valeur à chaque élément*/
    }

    for (k=99; k> 0; k--){ //Pour chaque nombre du tableau
        for (j=98; j > 0; j--){ //On boucle au maximum 98 fois si le premier élément est le plus grand 
            if (tableau_init[j]>tableau_init[j+1]){ // si l'élément est plus grand que celui d'apres, alors on les échanges
                inter = tableau_init[j+1];
                tableau_init[j+1]=tableau_init[j];
                tableau_init[j] = inter;
            }
        }
    }
    printf("Tableau trié:"); 
    
    for (k = 0; k < sizeof(tableau_init) / sizeof(int); k++) // on boucle pour affixher chaque élément du tableau trié
    {
        printf("%i\n", tableau_init[k]); 
    }
    return 0;
}
