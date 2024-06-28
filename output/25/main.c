#include <stdio.h>

int main() {
    int arr[8] = {2, 3, 5, 7, 11, 13, 17, 19};
    int *p = arr + 1;
    int *q = arr + 6;
    int i;

    for (i = 0; i < 4; i++) {
        arr[i] = arr[i * 2] + arr[i * 2 + 1];
    }

    *(--q) = *(p++);
    p--;
    *(++q) = *(p += 2);
    printf("%d %d %d\n", *arr + *q - *p, q - p, *p - *q);

    for (i = 0; i < 8; i++) {
        printf(" %d", arr[i]);
    }

    return 0;
}
