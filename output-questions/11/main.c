#include <stdio.h>

int main(){

    int arr[4] = {10,20,30,40};

    int *ptr = arr;

    for(int i = 0; i < 4; i++){
        printf(" %d", arr[i]);
    }
    printf("\nptr: %d \n\n", *ptr);

    // 

    ++*ptr;

    for(int i = 0; i < 4; i++){
        printf(" %d", arr[i]);
    }
    printf("\n++*ptr: %d \n\n", *ptr);

    //


    int result = 0;
    result = *ptr++; 
    


    for(int i = 0; i < 4; i++){
        printf(" %d", arr[i]);
    }
    printf("\n*ptr++: %d -- result: %d \n\n", *ptr, result);


    //

    result = 0;
    result = *++ptr;
    
    for(int i = 0; i < 4; i++){
        printf(" %d", arr[i]);
    }
    printf("\n*ptr++: %d -- result: %d \n\n", *ptr, result);


    //

    result = 0;
    result = *--ptr;
    
    for(int i = 0; i < 4; i++){
        printf(" %d", arr[i]);
    }
    printf("\n*ptr++: %d -- result: %d \n\n", *ptr, result);


    

    return 0;
}