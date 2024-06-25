// Fonksiyonlarda pointer kullanımı

// Bir pointer ve fonksiyon kullanarak değişken değeri değiştirmek

#include <stdio.h>


void changeValue(int *ptr){
    *ptr = 20;
}


int main() {
    int num = 10;
    printf("Before: %d\n", num);
    changeValue(&num);
    printf("After: %d\n", num);

    return 0;
}
