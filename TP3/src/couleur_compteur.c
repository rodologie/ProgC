/* En réutilisant le code de *couleurs.c*, écrivez un programme
*couleur_compteur.c* qui stocke 100 couleurs dans un tableau
et qui affiche les couleurs distinctes et leur nombre dans le tableau. 

Pour cet exercice, il y a trois étapes principales :
1. Tout d'abord, créez une structure pour stocker les détails d'une couleur : R, G, B et A
2. Créez un tableau de 100 couleurs en utilisant la structure ci-dessus.
3. Comptez le nombre de couleurs distinctes.

Par exemple, si le tableau contient les couleurs suivantes:

```
0xff 0x23 0x23 0x45              
0xff 0x00 0x23 0x12              
0xff 0x23 0x23 0x45             
```

Vous devez afficher

```              
0xff 0x23 0x23 0x45 2              
0xff 0x00 0x23 0x12 1.             
```

Vous pouvez créer une nouvelle structure pour stocker les couleurs distinctes et leur compte. 
*/
#include <stdio.h>
#include <stdlib.h>

struct Couleurs
{ // création de la structure couleur
    char r;
    char v;
    char b;
    char a;
};

int main()
{
    struct Couleurs tableau[100]; // création du tanleau de 100 couleurs

    for (int i = 0; i < 98; i++)
    { // affectation des valeurs aux 100 couelurs du tableau, possibilité de vérifier si le compteur marche en changeant la borne max de la boucle par 98
      //  (on en créerait alors 98 et on compléterait le tableau par les lignes commentées qu'il faudrait décommenter)

        int rouge = rand(); // on assigne des valeurs aléatoires pour chaque couleur
        int vert = rand();
        int bleu = rand();
        int alpha = rand();

        tableau[i].r = rouge;
        tableau[i].v = vert;
        tableau[i].b = bleu;
        tableau[i].a = alpha;
    }

    tableau[98].r = 0x00;
    tableau[98].v = 0x00;
    tableau[98].b = 0x00;
    tableau[98].a = 0x00;

    tableau[99].r = 0x00;
    tableau[99].v = 0x00;
    tableau[99].b = 0x00;
    tableau[99].a = 0x00;

    int compt = 1; // compteur du nombre de chaque couleur

    for (int i = 0; i < 100; i++)
    { // on parcourt la liste des couleurs
        for (int j = i + 1; j < 100; j++)
        { // on reparcourt la liste pour chaque couleur du tableau
            if ((tableau[i].r == tableau[j].r) && (tableau[i].v == tableau[j].v) && (tableau[i].b == tableau[j].b) && (tableau[i].a == tableau[j].a))
            {                      // si deux couleurs dans le tableau sont similaires
                tableau[j].r = -1; // on remplace dans le tableau une des couleurs pour ne plus la prendre en compte ensuite
                tableau[j].v = -1;
                tableau[j].b = -1;
                tableau[j].a = -1;
                compt++; // on incrémente le compteur des occurences
            }
        }

        if ((tableau[i].r != -1) && (tableau[i].v != -1) && (tableau[i].b != -1) && (tableau[i].a != -1))
        {                                                                                                                                                           // On vérifie si la oculeur n'a pas déjà été vue
            printf("R = %02x \nG = %02x \nB = %02x \nAlpha = %02x, \nnombre de couleurs: %d \n \n", tableau[i].r, tableau[i].v, tableau[i].b, tableau[i].a, compt); // on affiche la couleur en question avec son nombre d'occurence dans le tableau
        }
        compt = 1; // on réinitialise le compteur à 1 puis on repart
    }

    return (0);
}
