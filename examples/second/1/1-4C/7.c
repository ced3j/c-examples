// Değiştirilebilen İşaretçi ama Değiştirilemeyen Veri



#include <stdio.h>

int main(){

    int num1 = 10;
    int num2 = 20;
    const int *ptr = &num1;

    // *ptr = 15; // Hata: const veri değiştirilemez
    
    ptr = &num2; // Bu geçerli çünkü işaretçi const değil

    return 0;
}

