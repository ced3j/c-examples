#include <stdio.h>

int main() {
    int arr[14] = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40};
    int *p = arr + 3;
    int *q = arr + 10;
    int i;

    for (i = 0; i < 7; i++) {
        arr[i] = arr[i * 2] - arr[i * 2 + 1];
    }

    *(++p) = *(q -= 4);
    q++;
    *(--q) = *(p += 2);
    printf("%d %d %d\n", *arr + *q - *p, q - p, *p - *q);

    for (i = 5; i < 12; i++) {
        printf(" %d", arr[i]);
    }

    return 0;
}
