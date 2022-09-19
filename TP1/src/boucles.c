#include <stdio.h>

int main() {
    int compter = 6;
    int taille_act;
    if (compter<4){ //on vérifie si la taille est bien supérieure à 4
        printf("impossible\n");
    }
    else {
        for (taille_act = 0;taille_act < compter;taille_act++ ){
            printf("*"); //on affiche la premiere étoile de chaque ligne 
            int j;  //on initialise une variable qui sert à nous positionner dans chaque ligne
            for (j=2; j<taille_act+1; j++){
                printf("#");    //si on ne se trouve pas sur la première ni sur la dernière colonne, on affiche un #
            }
            if (j == taille_act+1){
                printf("*");    //si on se trouve sur la derniere colonne de la ligne on affiche une *
            }
            printf("\n");
        }
    }
    return 0;
}