#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *p = arr + 2;
    int *q = arr + 5;
    int result;

    result = ++*p + --*q + *p++;
    printf("Before: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, arr[4] = %d, arr[5] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], result);

    p = arr + 1;
    q = arr + 4;

    result = *p++ - *--q + *++p + --*q;
    printf("After: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, arr[4] = %d, arr[5] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], result);

    return 0;
}
