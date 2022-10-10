#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[] ){
    int res;
    printf("%s\n",*argv[0]);
    printf("%s\n",*argv[1]);
    printf("%s\n",*argv[2]);
    printf("%s\n",*argv[3]);
    int num1 = atoi(*argv[2]);
    int num2 = atoi(*argv[3]);
    
  /*  switch (*argv[1]){
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
    }*/
    printf("%d \n",res);
    return 0;
}