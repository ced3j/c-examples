#include <stdio.h>

int main() {
    int arr[] = {12, 24, 36, 48};
    int *p = arr + 1;
    int *q = arr + 3;
    int result1, result2, result3;

    printf("Initial values:\n");
    printf("arr: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    printf("*p: %d, *q: %d\n", *p, *q);

    result1 = *--p + *q--;
    printf("\nAfter first operation (result1):\n");
    printf("arr: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    printf("*p: %d, *q: %d, result1: %d\n", *p, *q, result1);

    result2 = *++p + --*q;
    printf("\nAfter second operation (result2):\n");
    printf("arr: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    printf("*p: %d, *q: %d, result2: %d\n", *p, *q, result2);

    result3 = *p-- + ++*q;
    printf("\nAfter third operation (result3):\n");
    printf("arr: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    printf("*p: %d, *q: %d, result3: %d\n", *p, *q, result3);

    return 0;
}
