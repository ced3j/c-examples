#include <stdio.h>



int main(){

    int dizi[] = {10, 20, 30, 40, 50, 60, 70, 80};

    int *ptr = NULL;
    int *qtr = NULL;
    ptr = dizi;
    qtr = &dizi[4];

    printf("First: ptr: %d -- qtr: %d\n\n",*ptr, *qtr);


    // *++ptr ile *(++ptr) aynı şeydir ama parantezli olan kullanım daha düzgün ve okunaklı


    *(qtr++) = *(ptr++);
    // önce qtr'nin gösterdiği yere ptr'nin değerini atar ve ikisinin de gösterdiği adresi 1 arttırır
    

    for(int i = 0; i < 8; i++){
        printf("%d ", dizi[i]);
    }


    printf("\n");
    *(qtr++) += 1;
    // önce qtr'nin adresindeki değere += 1 işlemini uygular daha sonra da qtr'nin adresini kaydırır

    for(int i = 0; i < 8; i++){
        printf("%d ", dizi[i]);
    }

    
    printf("\n");

    printf("qtr: %d ", *qtr);

    printf("\n");


    *(--qtr) += 10;
    printf("\nqtr: %d\n", *qtr);

    for(int i = 0; i < 8; i++){
        printf("%d ", dizi[i]);
    }

    return 0;
}