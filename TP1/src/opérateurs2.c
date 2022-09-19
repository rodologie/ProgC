#include <stdio.h>

int main(){
    int num1 = 3;
    int num2 = 8;
    char op='%';
    int res;

    switch (op) {
        case '+': res = num1+num2;
            break;
        case '-': res = num1-num2;
            break;
        case '/': res = num1/num2;
            break;
        case '*': res = num1*num2;
            break;
        case '%': res = num1%num2;
            break;
        case '&': res = num1&&num2;
            break;
        case '|': res = num1||num2;
            break;
        case '~':res = ~num1;
            break;
    }
    printf("%d \n",res);
    return 0;
}


