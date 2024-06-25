// Dizi elemanlarına erişim 
// indis ile ve işaretçi ile


#include <stdio.h>


void printArrayIndex(const int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printArrayPointer(const int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main(){
    int myArr[] = {4,5,1,3,6,7,11,7,8,21,86};
    int sizeArr = sizeof(myArr)/sizeof(myArr[0]);
    printArrayIndex(myArr, sizeArr);
    printArrayPointer(myArr, sizeArr);

    return 0;
}