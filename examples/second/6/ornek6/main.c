#include <stdio.h>


int main() {
    int dizi[10] = {2, 4, 6, 8, 10}, i;
    int *p = dizi;
    int *q = dizi + 4;

    for (i = 5; i < 10; i++) {
        dizi[i] = dizi[i - 5] + dizi[i - 4];
    }

    *(++p) = *(q--);
    q++;
    *(--q) = *(p++);
    printf("%d %d %d\n", *dizi + *q - *p, q - p, *p - *q);

    for (i = 3; i < 7; i++) {
        printf(" %d", dizi[i]);
    }

    return 0;
}


