#include <stdio.h>

void updateValues(int *a, int *b){
    *a += 10;
    *b += 20;
    printf("updateValues: a = %d, b = %d", *a, *b);

}


void swapPointers(int **ptr1, int **ptr2){
    int *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


int main(){

    int x = 5;
    int y = 15;
    int *ptr1 = &x;
    int *ptr2 = &y;


    printf("\n\ninitial x: %d, y: %d\n", x, y);
    printf("pointer values: *ptr1 = %d, *ptr2 = %d", *ptr1, *ptr2);

    updateValues(ptr1, ptr2);


    printf("after updateValues: x = %d, y = %d", x, y);
    printf("Pointer values after updateValues: *ptr1 = %d, *ptr2 = %d", *ptr1, *ptr2);


    swapPointers(&ptr1, &ptr2);

    printf("After swapPointers: *ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);
    printf("Final values: x = %d, y = %d\n\n\n", x, y);
    
    return 0;
}