// -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Exercice 4 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

/* Écrivez un programme *chercher.c* en créant un tableau de 100 entiers et
puis en cherchant un entier dans ce tableau. Si l'entier est présent
dans le tableau, affichez le message 'entier présent'. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Exercice 4 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_- \n \n \n \n");

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

    printf(" \n \n \n");

    // -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Exercice 8 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Exercice 8 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_- \n \n \n \n");

    // Partie génération des phrases

    char tableau_phrase[10][100]={}; // tableau contenant les phrases, initialament vide
    char tableau_mot [15][8] = {"je", "la","le", "suis","est", "voiture", "train", "bateau", "noir", "bleu", "rouge", "vert", "rose", "grand", "petit"}; // tableau contenant les mots 
    
    int incr = 0; 

    for (int i = 0; i<=10; i++){ /* Creation d'un tableau avec des phrases contenant les mots de tableau_mot */
        int nb_mot  =rand() % 4 + 1;

        for (int var = 0; var <= nb_mot; var ++ ){
            int indice_mot = rand() % 15;
            strcat(tableau_phrase[i],tableau_mot[indice_mot]);
        }
    }

    for (int n = 0; n<=10; n ++){ /* Affichage des phrases */
        printf("%s \n", tableau_phrase[n]);
    }

    // partie recherche de la phrase

    char entree2[50]; //variable contenant la phrase entrée par l'utilisateur (max 50 caractères)
    printf("Entrez la que vous recherchez : ");
    scanf("%s", entree2); /* Demande la phrase à chercher à l'utilisateur  */
    while (entree2[nb_lettre]  != '\0'){
            nb_lettre = nb_lettre + 1;
        }
    

    for (int p=0; p<10; p++){   //on parcourt le tableau de phrase
        int erreur = 0; /* Initialisation du compteur erreur */ 
        for (int x = 0; x < nb_lettre + 1; x++){ //on parcourt les caractères de la phrase
            if (tableau_phrase[p][x]!= entree2[x]){ //si les caractères sont différents, on incrémente l'erreur
                erreur = erreur + 1;
            }
        }
        if (erreur != 0) //si la variable erreur est différente de 0 indique que la phrase n'est pas présente dans le tableau
        {
            printf("La phrase n'est pas présente à l'indice %i \n", p);
        }
        else{ // si l'erreur est nulle, alors on indique que la phrase est dans le tableau à l'indice x.
            printf("La phrase est présente à l'indice %i \n", p);
        }
    }

    

    return 0;
    
}