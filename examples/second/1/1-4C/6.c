
// Değiştirilemeyen Veri, Değiştirilebilen İşaretçi:
//          const int *ptr = &num;




// Değiştirilebilen Veri, Değiştirilemeyen İşaretçi:
//          int * const ptr = &num;




// Hem Değiştirilemeyen Veri, Hem Değiştirilemeyen İşaretçi:
//          const int * const ptr = &num;




// İşaretçinin değiştirilemez oluşu tam olarak ne demek? 

/*
İşaretçinin değiştirilemez oluşu, işaretçinin (pointer) 
kendisinin farklı bir adresi işaret edemeyeceği anlamına gelir. 
Yani, işaretçi ilk başta hangi adresi işaret ediyorsa, 
programın geri kalanında bu adresi değiştiremezsiniz.
 */








// Örnek 1: Değiştirilemeyen İşaretçi ve Değiştirilemeyen Veri


#include <stdio.h>

int main(){

    const int num = 10;
    const int * const ptr = &num;
    // ptr = &new_num;  // Hata: const işaretçi yeniden atanamaz
    // *ptr = 20;  // Hata: const veri değiştirilemez

    return 0;
}

