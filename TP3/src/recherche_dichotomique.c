#include <stdio.h>
#include <stdlib.h>

int main()
{

    int rand();
    int k, j;
    int tableau_init[100];
    int inter;
    int recherche;

    for (k = 0; k < sizeof(tableau_init) / sizeof(int); k++)
    {
        tableau_init[k] = rand() % 100; /* Parcourt de tous les indices du tableau pour assigner une valeur à chaque élément*/
    }

    for (k = 99; k > 0; k--)
    {
        for (j = 98; j > 0; j--)
        {
            if (tableau_init[j] > tableau_init[j + 1])
            {
                inter = tableau_init[j + 1];
                tableau_init[j + 1] = tableau_init[j];
                tableau_init[j] = inter;
            }
        }
    }
    printf("Tableau trié:");

    for (k = 0; k < sizeof(tableau_init) / sizeof(int); k++)
    {
        printf("%i\n", tableau_init[k]); /* Parcourt de tous les indices du tableau pour assigner une valeur à chaque élément*/
    }
    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Fin du tri du tableau -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    char input1[30];
    int indice = 49;
    printf("saisissez la valeur recherchée: ");
    fgets (input1, sizeof(input1),stdin);
    int val_rech =  atoi(input1);
    int err = 0;
    int borne_max = 100;
    int borne_min = 0;

    while (val_rech != tableau_init[indice]){ //boucle tant que la valeur recherchée est différente de celle pointée dans le tableau
        if (val_rech > tableau_init[indice]){ //si valeur recherchée est plus grande que celle pointée
             borne_min = indice;    //la borne min devient l'indice de la valeur pointée
             indice = (borne_max+borne_min)/2;  //l'indice devient la valuer moyenne 
             if ((val_rech != tableau_init[indice])&&(val_rech < tableau_init[indice + 1])&& (borne_min == indice)){
                err  =1;
                break;
             }
        }
        else if (val_rech < tableau_init[indice])
        {
            borne_max = indice;
            indice = (borne_max + borne_min) / 2;
        }
        else if ((k == -1)||(indice == -1)){
            err = 1;
            break;
        }
        else{
            break;
        }
        
        
        
    }
    if (err == 1) {
        printf("la valeur n'est pas dans le tableau \n");
    }
    else if (err == 0)
    {
        printf("valeur recherchée = %d, valeur trouvée = %d, à l'indice %d \n", val_rech, tableau_init[indice], indice);
    }
    

    return 0;
}
