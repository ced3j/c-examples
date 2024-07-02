// Pointer ile bubble sort


// Bubble Sort nedir?
/*

3 4 12 1 34 16
Listedeki elemanları çift çift alarak birbirleri içinde karşılaştırır
Büyük olanı küçük olanla yer değiştiririz ve bütün liste bir düzene girene kadar 
Bu listenin üzerinden defalarca geçilir


*/


#include <stdio.h>

void bubbleSort(int *arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = 1; j < size-i; j++){
            if(*(arr +j -1) > *(arr + j)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j - 1);
                *(arr + j - 1) = temp;
            }
        }
    }
}

int main(){

    int arr[5] = {845,1,64,135,267};
    bubbleSort(arr, 5);


    for(int i = 0; i < 5; i++){
        printf(" %d", arr[i]);
    }

    return 0;
}
