#include <stdio.h>

int main() {
    int a = 2 ;
    int b;
    int res = 1;

    for(b = 3;(b-1)>=0;b--) {
        res = res*a;
    }

    printf("La valeur de a, à la puissance b est : %d \n", res);
    return 0;
}