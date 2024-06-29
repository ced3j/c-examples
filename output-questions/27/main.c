#include <stdio.h>

int main() {
    int arr[4] = {5, 10, 15, 20};
    int *p = arr;
    int *q = arr + 3;
    int result;

    result = *p++ + *--q + ++*p;
    printf("Before: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], result);

    p = arr + 1;
    q = arr + 2;

    result = *p-- - *++q + --*p - ++*q;
    printf("After: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], result);

    return 0;
}
