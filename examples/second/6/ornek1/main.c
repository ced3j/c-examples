#include <stdio.h>

int main(){

    int dizi[5] = {1,2,3,4,5};
    int *p = dizi;
    int *q = dizi+2;

    *q = *p + 3;
    p++;
    *p = *q + 1;

    printf("%d %d %d %d %d\n", dizi[0], dizi[1], dizi[2], dizi[3], dizi[4]);

    return 0;
}