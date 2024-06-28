#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4};
    int *p = arr;
    int *q = arr + 2;
    int result;

    result = *p++ + *--q + ++*p;
    printf("Before: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], result);

    p = arr + 1;
    q = arr + 3;

    result = ++*p + *q-- + --*p + *++q;
    printf("After: arr[0] = %d, arr[1] = %d, arr[2] = %d, arr[3] = %d, result = %d\n", arr[0], arr[1], arr[2], arr[3], result);

    return 0;
}
