#include <stdio.h>

int main() {
    int dizi[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int *p = dizi;
    int *q = dizi + 5;

    *(p + 3) = *(q - 2) * 2;
    q--;
    *(p + 1) = *q + 3;
    p += 2;
    *(q - 1) = *p - 1;
    q -= 2;
    *q = *(p + 1) * 3;

    printf("%d %d %d %d %d %d %d %d\n", dizi[0], dizi[1], dizi[2], dizi[3], dizi[4], dizi[5], dizi[6], dizi[7]);

    return 0;
}