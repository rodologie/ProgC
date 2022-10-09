#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;
    int addition = a+b;
    int soustraction = a-b;
    int multiplication = a*b;
    float division = (float)a/(float)b;
    int reste_division = a%b;
    printf("Les résultats sont:\n - Addition: %d,\n - Soustraction: %d,\n - Multiplication: %d, \n - Division: %f, \n - Reste de la division euclidienne: %d \n", addition, soustraction, multiplication, division, reste_division);

    int negation = !a;
    int ET = a && b;
    int OU = a||b;
    printf("Les résulatats des tests logiques sont:\n - Négation: %d,\n - ET: %d\n - OU: %d\n", negation, ET, OU);
    return 0;
}

/*Pas de commentaires particulier à faire, le code et la nommenclature des variables sont clairs*/