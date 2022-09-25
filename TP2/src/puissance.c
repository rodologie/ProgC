#include <stdio.h>

int main() {
    int a = 2 ;
    int b = 3 ;

    for(b, b-1>0,b--) {
        a= a*a;
    }

    disp("La valeur de a est : %i \n",a)
}