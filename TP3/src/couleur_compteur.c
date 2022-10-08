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

struct couleurs { /* Les couleurs sont données entre 0 et 255 et A entre 0 et 1 */
    int R ;
    int G ;
    int B ;
    int A ;
    
};

struct distinction {
    int R ;
    int G ;
    int B ;
    int A ;
};

int comparateur(struct couleurs ligne_ref,struct couleurs ligne_couleur ) { /* Fonction qui compare 2 lignes du tableau couleur par couleur */
    int cpt=0;
    if(ligne_ref.R != ligne_couleur.R){
        if(ligne_ref.G != ligne_couleur.G){
            if(ligne_ref.B != ligne_couleur.B) {
                if(ligne_ref.A != ligne_couleur.A) {
                    cpt = cpt+1;
                }
            }
        }
    }
    return cpt;
};

void affichstruct(struct distinction Tab_distinct){ /* Affichage de la valeur de chaque couleur une par une */
    printf(" La valeur de R est %x\n",Tab_distinct.R);
    printf(" La valeur de G est %x\n", Tab_distinct.G);
    printf(" La valeur de B est %x\n", Tab_distinct.B);
    printf(" La valeur de A est %x\n", Tab_distinct.A);
};

int main() {
    struct couleurs Tab[10]; /* Creation d'un tableau de 100 lignes avec les couleurs R,G,B,A */
    int var;

    for(var=0; var<100 ; var++) { /* Declaration des valeurs aléatoires des couleurs */
        Tab[var].R = rand() %256;
        Tab[var].G = rand() %256;
        Tab[var].B = rand() %256;
        Tab[var].A = (float)(rand() %256)/256;
    }
   
    int comparateur=0;
    struct distinction Tab_distinct[comparateur];

    for (var = 0; var < 100; var++){ /* Test de chaque couleur du tableau Tab */
        struct couleurs ligne_ref = Tab[var];
        
        for(int j=var; j<100; j++) { /* Avec toutes les autres couleurs de Tab à partir de la couleur essayee */
            struct couleurs ligne_couleur= Tab[j];
            int cpt;
            cpt  = comparateur(ligne_ref,ligne_couleur);
            if(cpt == 1) {
                comparateur = comparateur +1; /* Incrementation du nombre de couleur distinctes */
                Tab_distinct[comparateur] = ligne_ref;
                
            }
        }
    }

    for (int k =0; k<comparateur;k++){ /* Affichage des couleurs distinctes */
        printf("Tab[%d]\n", k);
        affichstruct(Tab_distinct[k]);
    }
    printf("Il y a %i couleurs distinctes dans le tableau \n", comparateur); /* Affichage du nombre de couleurs distinctes */

return 0;
}




















