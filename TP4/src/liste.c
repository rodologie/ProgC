#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "liste.h"

// cette fonction permet d'associer à la couleur en cour de traitement le pointeur de la prochaine couleur
void insertion(struct couleur *coul_ajout, struct liste_couleurs *precedant_ptr)
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
// affichage de toutes les caractéristiques de chaques couleur de la liste_couleur
void parcours(struct liste_couleurs *couleur)
{
    struct liste_couleurs *ptr = couleur;
    for (int i = 0; i < 10; i++)
    {
        printf("R = %i G = %i B = %i A = %f \n", ptr->c.R, ptr->c.G, ptr->c.B, ptr->c.A);
        ptr = ptr->c_suivant;
    }
};


int main(){
    int max = 255;

    // initialisation de la première couleur
    struct couleur C_int = {
        rand() % max,
        rand() % max,
        rand() % max,
        (float)(rand() % max) / 255,
    };
    // création du premier maillion de la liste_couleus
    struct liste_couleurs precedant = {
        C_int,
        NULL};

    // ajout des autres couleurs dans la liste_couleurs
    for (int i = 0; i < 10; i++)
    {
        struct couleur C_suivant = {
            rand() % max,
            rand() % max,
            rand() % max,
            (float)(rand() % max) / 256,
        };
        insertion(&C_suivant, &precedant);
    };

    // affichage de la liste_couleurs
    parcours(&precedant);
    return 0;
}