#include <stdio.h>

int main() {
    int arr[3] = {5, 10, 15};
    int *p = arr;
    int *q = arr + 1;
    int result;

    result = *p++ + *q++;
    printf("After first operation: arr[0] = %d, arr[1] = %d, arr[2] = %d, result = %d\n", arr[0], arr[1], arr[2], result);
    printf("p: %d, q: %d\n\n\n\n", *p, *q);



    p = arr;
    q = arr + 2;
    result = *p + ++*q + *++p;
    printf("After second operation: arr[0] = %d, arr[1] = %d, arr[2] = %d, result = %d\n", arr[0], arr[1], arr[2], result);
    printf("p: %d, q: %d", *p, *q);

    return 0;
}
