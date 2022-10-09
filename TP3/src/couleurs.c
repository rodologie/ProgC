#include <stdio.h>

//code du TP2

struct couleurs{
    int R;
    int G;
    int B;
    int A;
};

void affichstruct(struct couleurs coul){
    printf(" La valeur de R est %x\n",coul.R);
    printf(" La valeur de G est %x\n", coul.G);
    printf(" La valeur de B est %x\n", coul.B);
    printf(" La valeur de A est %x\n", coul.A);
};

int main()
{
    struct couleurs Tab[10];
    int var;

    for (var = 10; var != 0; var--)
    {
        printf("Tab[%d]\n", var);
        affichstruct(Tab[var]);
    }
    return 0;
}