// pointer ve recursive ile diziyi ters çevirme

#include <stdio.h>


void reverseArray(int *arr, int start, int end){
    if(start >= end){
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Dizinin orjinali: ");
    for(int i = 0; i < n; i++){
        printf(" %d", arr[i]);
    }

    printf("\n");

    reverseArray(arr, 0, n-1);

    printf("Dizinin ters cevrilmis hali: ");
    for(int i = 0; i < n; i++){
        printf(" %d", arr[i]);
    }
    
    printf("\n");

    return 0;
}