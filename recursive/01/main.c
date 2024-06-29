// pointer ve recursive
#include <stdio.h>


int sumArr(int *arr, int n){
    if(n == 0){
        return 0;
    }else{
        return *arr + sumArr(arr + 1, n - 1);
    }
}

int main(){

    int arr[] = {1,25,6,11,64,13};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = sumArr(arr, size);
    printf("The result is : %d", result);

    return 0;
}