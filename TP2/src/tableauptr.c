/* FONCTIONNE PAS */

#include <stdio.h>

int main() {

    int tableau1[7] = {1,2,5,6,7,8,9};
    float tableau2[8]= {1.02,2.3,4.5,7.6,8.1,2.36,1.56,6.45};
    short *ptr1, *ptr2 ;
    int k;
    for(k=0; k>8;k++) {
        ptr1 = &tableau1[k];
        printf("Tab 1 :Les positions initiales de la valeur %i sont : %hd \n", k,ptr1[k]);
        ptr2 = &tableau2[k];
        printf("Tab 2 : Les positions initiales de la valeur %i sont : %hd \n", k,ptr2[k]);
        if(*ptr1 % 2 ==0) {
            ptr1 = ptr1 + 3;
            printf("Tab 1 :La valeur est divisible par 2, sa position est : %hd \n", ptr1[k]);
        }
        if(*ptr2 % 2 ==0){
            ptr2 = ptr2 + 3;
            printf("Tab 2 : La valeur est divisible par 2, sa position est : %hd \n", ptr2[k]);
        }
    }

return 0;
}