/*

------------------  UNSIGNED  ------------------

C programlamada "unsigned", negatif değer alamayan ve sadece pozitif tam sayıları ve sıfırı temsil eden veri türlerini tanımlamak için kullanılır. Standart "int" veri türü negatif ve pozitif tam sayıları temsil edebilirken, "unsigned int" sadece pozitif tam sayıları ve sıfırı temsil eder.

    Unsigned Veri Türleri
    unsigned char
    unsigned short
    unsigned int
    unsigned long

Neden Unsigned Kullanılır?
    Daha geniş pozitif sayı aralığına ihtiyaç duyduğunuzda.
    Değerlerin her zaman pozitif olmasını garanti etmek istediğinizde (örneğin, yaş, sayaç değerleri).


 */




#include <stdio.h>

int main() {
    // Dizi tanımlaması ve elemanları
    int numbers[] = {10, -5, 15, 20, -10, 30};
    unsigned int sum = 0; // Toplamı saklayacak değişken

    // Dizi uzunluğunu hesapla
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Dizi elemanları üzerinden döngü
    for(int i = 0; i < length; i++) {
        if (numbers[i] >= 0) { // Sadece pozitif sayıları toplama ekle
            sum += numbers[i];
        } else {
            printf("Negatif değer (%d) atlanıyor.\n", numbers[i]);
        }
    }

    // Toplamı yazdır
    printf("Pozitif sayıların toplamı: %u\n", sum);

    return 0;
}



