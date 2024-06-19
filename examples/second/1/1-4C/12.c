// Pointer ve array kullanımı

#include <stdio.h>

void printArray(int *arrPtr, int size){
    for(int i = 0; i < size; i++){
        printf("%d", arrPtr[i]); 
    }
}

// Burada arrPtr bir pointerdır 
// ve gönderilen array'in ilk elemanını tutarak başlar



int main() {
    int numbers[] = {1,2,3,4,5};
    printArray(numbers, 5);

    return 0;
}
