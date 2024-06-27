#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;
    int *q = arr + 1;
    int result;

    result = *p++ + *--q + ++*p;
    printf("Before: arr[0] = %d, arr[1] = %d, arr[2] = %d, result = %d\n", arr[0], arr[1], arr[2], result);

    p = arr;
    q = arr + 2;

    result = ++*p + *q-- + --*p + *++q;
    printf("After: arr[0] = %d, arr[1] = %d, arr[2] = %d, result = %d\n", arr[0], arr[1], arr[2], result);

    return 0;
}




