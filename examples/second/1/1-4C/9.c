// İşaretçi sabit ama veri değişken

#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;

    int * const ptr = &num1;

    printf("pointer before: %d\n\n", *ptr);

    // ptr = &num2;   // HATA. çünkü const işaretçiye
    //                  bir kez adres verdikten sonra başka bir adres verilemez
    
    *ptr = 15;
    printf("pointer after: %d\n\n", *ptr);


    return 0;
}
