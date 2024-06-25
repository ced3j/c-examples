// Dizi elemanlarını indis ve pointer ile karşılaştır


#include <stdio.h>


int comparePointer(const int *arr1, const int *arr2, int size){
    for(int i = 0; i < size; i++){
        if(*(arr1 + i) != *(arr2 + i)){
            return 0;
        }
    }
    return 1;
}


int compareIndex(const int *arr1, const int *arr2, int size){
    for(int i = 0; i < size; i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    int size = sizeof(arr1)/sizeof(arr1[0]);

    if(compareIndex(arr1, arr2, size)){
        printf("Arrays are equal - index notation \n");
    }else{
        printf("Arrays aren't equal - index notation \n");
    }

    if(comparePointer(arr1, arr2, size)){
        printf("Arrays are equal - pointer notation \n");
    }else{
        printf("Arrays aren't equal - pointer notation \n");
    }

    return 0;
}