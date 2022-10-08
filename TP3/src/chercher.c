// -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Exercice 4 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

/* Écrivez un programme *chercher.c* en créant un tableau de 100 entiers et
puis en cherchant un entier dans ce tableau. Si l'entier est présent
dans le tableau, affichez le message 'entier présent'. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rand(void);
    int k;
    int tableau[100]; /* Declaration d'un tableau de 100 valeurs */
    int nombre_recherche;
    int err;
    int prst = 0;

    int entree;
    printf("Entrez la valeur de l'entier recherché entre 0 et 150 : ");
    entree = scanf("%d",&nombre_recherche); /* Demande la valeur à l'utilisateur /!\ a l'espace entre le d et les guillemets */

    if (entree ==1) {  /* Verification de la bonne entree d'un entier */
    int j;
    for (k = 0; k < sizeof(tableau) / sizeof(int); k++){ /* Parcourt de tous les indices du tableau */
        tableau[k] = rand() % 150;    /* Attribution aleatoire des entiers du tableau */                         
       
    }
    

    for(j=0;j<100;j++) {

        if(tableau[j]== nombre_recherche) { /* Recherche de l'entier dans le tableau */
            prst = prst + 1;
        }
        else{
            err = err + 1;
        }
    }
    }
    if (prst >= 1){
        printf("Entier present %i fois\n", prst);
    }
    else if ((prst == 0) || (err == 100))
    {
        printf("Entier non présent \n");
    }
    
    

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Exercice 8 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-




    return 0;
    
}