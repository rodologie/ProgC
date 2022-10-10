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
    int i= 4;
    printf(" %i !  = %i \n \n",i,factorielle(i));

return 0;
}