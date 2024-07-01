// Bir dizinin elemanının adresini döndüren fonksiyon

#include <stdio.h>

int* getArrayElement(int* array, int index){
    return &array[index];
}

int main(){
    int myArray[5] = {10, 20, 30, 40, 50};
    int index = 2;

    int* elementPtr = getArrayElement(myArray, index);
    printf("Dizinin %d. elemaninin degeri: %d\n", index, elementPtr);


    return 0;
}


// Bu örnekte, getArrayElement fonksiyonu bir diziyi ve bir 
// indeksi alır, ardından o indeksdeki elemanın adresini döndürür.


