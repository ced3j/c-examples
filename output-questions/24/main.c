#include <stdio.h>

int main() {
    int arr[12] = {1, 2, 3, 4, 5, 6};
    int *p = arr;
    int *q = arr + 5;
    int i;

    for (i = 6; i < 12; i++) {
        arr[i] = arr[i - 6] + arr[i - 5];
    }

    *(p += 2) = *(q -= 3);
    q += 2;
    *(q -= 1) = *(p++);
    printf("%d %d %d\n", *arr + *q - *p, q - p, *p - *q);

    for (i = 4; i < 9; i++) {
        printf(" %d", arr[i]);
    }

    return 0;
}
