#include <stdio.h>
#include "operator.h"

int main(){
    //opérateur
    int num1 = 3;
    int num2 = 8;
    char operation='+';
    int res;

    switch (operation) {   //on switch en fonction de la valeur de la variable "operation"
        case '+':  res = addition(num1,num2);  // addition
            break;
        case '-':  res = soustraction(num1,num2);  // soustraction
            break;
        case '/':  res = quotient(num1,num2);  // division
            break;
        case '*':  res = produit(num1,num2);  // multiplication
            break;
        case '%':  res = modulo(num1,num2);  // modulo
            break;
        case '&':  res = ET(num1,num2); // ET logique
            break;
        case '|':  res = OU(num1,num2); // OU logique
            break;
        case '~':  res = negation(num1,num2);   //contraire (non x)
            break;
    }
    printf("%d \n",res);
    return 0;
}
