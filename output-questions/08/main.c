#include <stdio.h>

int main(){

    int x = 10;
    int y = 20;

    printf("before ptr: %d\n", x);
    int *p = NULL;
    p = &x;

    *p = 20;
    printf("after ptr: %d", x); 
    printf("Hello World");
    return 0;
}