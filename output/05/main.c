#include <stdio.h>

int main(){

    int arr[3] = {10, 20, 30};
    int *p = arr;
    int *q = arr + 2;
    int result;

    result = *p++ + *--q + ++*p;
    printf("BEFORE: arr[0] = %d, arr[1] = %d, arr[2] = %d, result = %d\n", arr[0], arr[1], arr[2], result);


    printf("\n\n BEFORE p = %d, q = %d\n\n", *p, *q);



    p = arr;
    q = arr + 2;

    result = ++*p + *q-- + --*p + *++q;
    
    printf("AFTER: arr[0] = %d, arr[1] = %d, arr[2] = %d, result = %d\n", arr[0], arr[1], arr[2], result);

    printf("\n\n AFTER p = %d, q = %d\n\n", *p, *q);


    return 0;
}