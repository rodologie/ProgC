#include <stdio.h>

int main() {
    int d = 0b00111011000000000001011;  //valeur à vérifier
    int test = 0b00010000000000000001000;   //valeur de référence avec ses bits 4 et 20 de gauche à 1
    int res = d & test; //la fonction ET renvoie un int en binaire dont les 1 inidquent quq'ils sont à 1 dans les deux variables testées

    if (res == test) {
        printf("%d\n", 1);
    }
    else {
        printf("%d\n", 0);
    }
    return 0;
}