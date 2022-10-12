#include <stdio.h>

int factorielle (int num) { // Fonction récursive pour calculer les factorielles
    if (num == 0) {
        return 1; // 0! = 1
        }
    else {
        return (num * factorielle (num-1)); // On rappelle la fonction pour l'entier-1 jusqu'à arriver à 0
        }
}
int main () { // Appel et affichage du résultat de la fonction
    for (int k= 10; k>0; k--){
        printf(" %i !  = %i \n \n",k,factorielle(k));
    }

return 0;
}

//on rajoute une boucle for à l'affichage 
//afin de pouvoir afficher plusieurs factorielle