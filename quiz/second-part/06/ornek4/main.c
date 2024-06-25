#include <stdio.h>
#include <stdlib.h>

int main(){

    int dizi[12] = {5,10,15}, i;
    int *ptr = &dizi[4];
    int *qtr = ptr + 3;

    for(i = 3; i < 10; i++){
        dizi[i] = dizi[i-3] + 2;
    }

    *(++ptr) = *(qtr - 2);
    qtr--;
    *(qtr++) = *(ptr++);
    printf("%d %d %d\n", *dizi + *qtr - *ptr, qtr -ptr, *ptr - *qtr);

    for(i = 5; i < 8; i++){
        printf(" %d", dizi[i]);
    }

    return 0;
}


/*
Önemli Not:

qtr - ptr ifadesi, iki işaretçi arasındaki farkı hesaplar. Bu fark, işaretçilerin işaret ettiği elemanlar arasındaki indeks farkını verir. 
Yani, qtr işaretçisinin ptr işaretçisinden kaç eleman ileride veya geride olduğunu gösterir. Bu fark, bir tam sayı (int) olarak döner.

qtr = &dizi[7] 
ptr = &dizi[6] 

aralarındaki fark "1"
qtr - ptr = 1

 */