#include <stdio.h>

int main(){
    int num1 = 3;
    int num2 = 8;
    char operation='%';
    int res;

    switch (operation) {   //on switch en fonction de la valeur de la variable "operation"
        case '+': res = num1+num2;  // addition
            break;
        case '-': res = num1-num2;  // soustraction
            break;
        case '/': res = num1/num2;  // division
            break;
        case '*': res = num1*num2;  // multiplication
            break;
        case '%': res = num1%num2;  // modulo
            break;
        case '&': res = num1&&num2; // ET logique
            break;
        case '|': res = num1||num2; // OU logique
            break;
        case '~':res = ~num1;   //contraire (non x)
            break;
    }
    printf("%d \n",res);
    return 0;
}


