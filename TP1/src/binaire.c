#include <stdio.h>

int main() {
    int i;
    int k;
    int nombre[15]; //nombre de bits nécessaires pour écrire le plus gros int possible en binaire
    int max_bin = 5230; //int que l'on souhaite convertir

    printf("le nombre %d en base 10, vaut ", max_bin);

    for (i=0; i<15; i++){   //on divise par deux jusqu'à n'avoir aucun reste
        nombre[i]=max_bin%2;
        max_bin = max_bin/2;
    }
    
    for (k=14; k>=0; k--){ //on replace les bits dans le bon ordre
        printf("%d", nombre[k]);
    }
    printf(" en base 2.\n");
}