#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr + 1;
    int *q = arr + 3;
    int result;

    result = *--p + *q++ + ++*p;
    printf("Before: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, arr[4] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], result);

    p = arr + 2;
    q = arr + 4;

    result = --*q + *p-- + *++p + ++*q;
    printf("After: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, arr[4] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], result);

    return 0;
}
