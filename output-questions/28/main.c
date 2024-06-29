#include <stdio.h>

int main() {
    int arr[5] = {3, 6, 9, 12, 15};
    int *p = arr + 1;
    int *q = arr + 4;
    int result;

    result = *q-- + ++*p + *--q;
    printf("Before: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, arr[4] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], result);

    p = arr;
    q = arr + 3;

    result = *p++ + --*q + *++p - *q--;
    printf("After: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, arr[4] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], result);

    return 0;
}
