#include <stdio.h>


int main(){

    int dizi[] = {1,2,3,4,5,6,7};


    for(int i = 0; i < sizeof(dizi)/sizeof(dizi[0]); i++){
        printf(" %d", dizi[i]);
    }

    int *ptr = NULL;
    ptr = dizi;


    // ptr = ptr + 3;
    ptr += 3;  // ikisi de aynı işlevi görür
    // ptr = dizi[0]'ı gösteriyordu artık dizi[3]'ün adresini tutacak


    printf("\n%d\n\n", *ptr);

    *ptr += 10;

    printf("%d\n\n", *ptr);

    
    for(int i = 0; i < sizeof(dizi)/sizeof(dizi[0]); i++){
        printf(" %d", dizi[i]);
    } 

    *(--ptr) = *--ptr; // ptr'nin gösterdiği adres 2 kez geriye çekilir 
    printf("\n%d\n", *ptr);  // yani artık dizi[1]'in adresini tutar

    return 0;
}