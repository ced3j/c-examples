#include <stdio.h>

int main(){

    int dizi[6] = {10, 20 , 30, 40, 50, 60};
    int *p = dizi + 1;
    int *q = dizi + 4;

    *p = *q + 1;
    q--;
    *q = *p + 2;
    p++;
    *p = *q - 3;

    printf("%d %d %d %d %d %d\n", dizi[0], dizi[1], dizi[2], dizi[3], dizi[4], dizi[5]);

    return 0;
}