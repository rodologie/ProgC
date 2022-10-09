#include <stdio.h>

struct couleurs{    //définition de la structure, chaque couleure sera composée de 4 valeurs (R, G, B, A)
    int R;
    int G;
    int B;
    int A;
};

void affichstruct(struct couleurs coul){    //fonction qui permet d'afficher les valeurs de R, G, B, A
    printf(" La valeur de R est %x\n",coul.R);
    printf(" La valeur de G est %x\n", coul.G);
    printf(" La valeur de B est %x\n", coul.B);
    printf(" La valeur de A est %x\n", coul.A);
};

int main()
{
    struct couleurs Tab[10];    //tableau de 10 couleurs
    int var;

    for (var = 10; var != 0; var--) //boucle qui partcourt chaque couleure t affixhe les valeurs de chacune
    {
        printf("Tab[%d]\n", var);
        affichstruct(Tab[var]);
    }
}