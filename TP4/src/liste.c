#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

// cette fonction permet d'associer à la couleur en cour de traitement le pointeur de la prochaine couleur
void insertion(struct couleur *coul_ajout, struct liste_couleurs *precedant_ptr) // association du pointeur à la couleur en cours 
{
    struct liste_couleurs *ptr = precedant_ptr;
    while ((ptr->c_suivant != NULL))
    {
        ptr = ptr->c_suivant;
    }

    struct liste_couleurs *suivant = malloc(sizeof(struct liste_couleurs));
    suivant->c = *coul_ajout;
    suivant->c_suivant = NULL;
    ptr->c_suivant = suivant;
};

void parcours(struct liste_couleurs *couleur) // on affiche chaque couleurs de la structure
{
    struct liste_couleurs *ptr = couleur;
    for (int i = 0; i < 10; i++)
    {
        printf("R = %i G = %i B = %i A = %f \n", ptr->c.R, ptr->c.G, ptr->c.B, ptr->c.A);
        ptr = ptr->c_suivant;
    }
};


