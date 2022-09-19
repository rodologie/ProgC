#include <stdio.h>

int main() {
    int rayon = 12;
    double pi = 3.14159265;
    float aire = pi*rayon*rayon;
    float perimetre = 2*pi*rayon;
    printf("Le périmetre du cercle est de %f et son rayon est de %f \n", perimetre, aire );
    return 0;
}

/* On crée plusieurs variables: 
    - on fixe le rayon à 12
    - on utlise une variable double pour pi afin de pouvoir mettre le plus de décimal possible
    - enfin on définit deux variables qui sont périmetre et aire afin de calculer ces grandeurs
    finalement on affiche tout avec un print f*/

