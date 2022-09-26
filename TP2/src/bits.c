#include <stdio.h>

int main() {
    int d = 0b00111011000000000001011;
    int test = 0b00010000000000000001000;
    int res = d & test;

    if (res == test) {
        printf("%d\n", 1);
    }
    else {
        printf("%d\n", 0);
    }
    return 0;
}