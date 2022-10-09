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
             indice = (borne_max+borne_min)/2;  //l'indice devient la valeur moyenne 
             if ((val_rech != tableau_init[indice])&&(val_rech < tableau_init[indice + 1])&& (borne_min == indice)){ //Si la valeur pointée n'est pas celle qui est recherchée, qu'elle est plus grande que celle pointée et plus petie que celle à l'indice suivant
                err  =1;                                                                                             //alors on fixe l'erreur à 1 pour éviter de boucler indéfiniment
                break;
             }
        }
        else if (val_rech < tableau_init[indice])
        {
            borne_max = indice;
            indice = (borne_max + borne_min) / 2;
            if ((val_rech != tableau_init[indice]) && (val_rech > tableau_init[indice - 1]) && (borne_max == indice)){// Si la valeur pointée n'est pas celle qui est recherchée, qu'elle est plus peite que celle pointée et plus grande que celle à l'indice précédent
                err = 1;                                                                                              // alors on fixe l'erreur à 1 pour éviter de boucler indéfiniment
                break;
            }
        }
        else if ((k == -1)||(indice == -1)){ //si on dépasse la longueur du tableauo u qu'on boucle trop (normalement pas nécésaire)
            err = 1;
            break;
        }
        else{
            break;
        }
        
        
        
    }
    if (err == 1) { //si erreur on indique qu'il y a erreur
        printf("la valeur n'est pas dans le tableau \n");
    }
    else if (err == 0) // si pas d'erreur on affiche la valeur trouvée et l'indice
    {
        printf("valeur recherchée = %d, valeur trouvée = %d, à l'indice %d \n", val_rech, tableau_init[indice], indice);
    }
    

    return 0;
}
