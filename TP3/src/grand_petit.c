/* Codez en C un programme *grand_petit.c* qui créer un tableau de 100
entiers et calculer

-   a) Le numéro plus grand
-   b) Le numéro plus petit

N'utilisez pas scanf. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rand();
    int k;
    int tableau[100]; /* Declaration d'un tableau de 100 valeurs */
    int grand_nombre;
    int petit_nombre;

    int j=0;
    for (k = 0; k < sizeof(tableau) / sizeof(int); k++){
        tableau[k] = rand() % 1000;                           /* Parcourt de tous les indices du tableau */
        printf("tableau de 100 entiers : %i \n", tableau[k]); /* Attribution aleatoire des entiers du tableau */
    }

    grand_nombre= tableau[0]; /* Definition des nombres de references */
    petit_nombre= tableau[99];
    for (j = 0; j <= (sizeof(tableau) / sizeof(int)); j++)
    {

        if (tableau[j]> grand_nombre) { /* Condition pour que la jeme valeur devienne le nouveau nombre de reference */
            grand_nombre = tableau[j];
        }
        
        if( tableau[j]< petit_nombre){ /* Idem dans l'autre sens */
            petit_nombre = tableau[j];
        }
    }
printf("Le plus grand numéro est : %i \n", grand_nombre); /* Renvoie les 2 nombres attendus XX pour l'instant grand et petit nombre renvoie la valeur que je leur ai attribué l. 25 et 26 */
printf("Le plus petit numéro est : %i \n", petit_nombre);
return 0;
}