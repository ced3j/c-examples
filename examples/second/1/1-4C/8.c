// İşaretçi sabit, veri değişken ÖRNEK:

#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;

    // İşaretçinin kendisi sabit
    int * const ptr = &num1;
    
    // int ( * const ptr ) = &num1;   ---> böyleymiş gibi düşünülebilir 
    // Sanki değişken taraf sabit tarafı içine alıyor yani kapsama işlemi yapıyor



    // İşaret edilen veri değiştirilebilir
    *ptr = 15;  // Bu geçerli, num1 şimdi 15 oldu



    // İşaretçinin kendisi değiştirilemez
    // ptr = &num2;  // Hata: const işaretçi yeniden atanamaz

    printf("num1: %d, num2: %d\n", num1, num2);  // num1: 15, num2: 20
    return 0;
}
