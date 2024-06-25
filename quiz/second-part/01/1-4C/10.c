// Değişken işaretçi ve değişken veri


#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;
    int *ptr = &num1;

    printf("pointer before: %d\n\n", *ptr);

    ptr = &num2;

    printf("pointer after: %d", *ptr); 

    return 0;
}