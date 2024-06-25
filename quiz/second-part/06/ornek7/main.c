#include <stdio.h>

int main(){

    int dizi[5] = {10, 20, 30, 40, 50};
    int *ptr = &dizi[2];

    *(--ptr) = *--ptr;

    ptr = &dizi[2]; // tekrar resetleyelim. 

    // ---------


    *(--ptr) = *ptr--;

    for(int i = 0; i < 5; i++){
        printf("%d ", dizi[i]);
    }

    return 0;
}