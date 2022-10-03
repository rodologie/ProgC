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

struct couleurs{
    int R = rand() %256 ;
    int G = rand() %256;
    int B = rand() %256;
    int A = (float)(rand() %256)/256;
    
};

int main() {
    struct couleurs Tab[10];
    int var;
    
    int k;
    for (var = 0; var < 10; var++){
        struct couleurs liste_inter[4]= Tab[var];
        for(k=0;k<10;k++){
            if( liste_inter == Tab[k]) {

            }
        }

        
        
    }




return 0;
}




















