#include <stdio.h>

int main() {
    int a = 2 ;
    int b;
    int res = 1;

    for(b = 3;(b-1)>=0;b--) {   //on boucle pour élever à lapuissance de b
        res = res*a;    //on part de 1 et on multiplie par a à chaque boucle 
    }

    printf("La valeur de a, à la puissance b est : %d \n", res); //on affiche
    return 0;
}