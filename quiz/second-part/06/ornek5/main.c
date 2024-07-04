#include <stdio.h>

int main() {
    int dizi[5] = {10, 20, 30, 40, 50};
    int *ptr = dizi; // ptr = &dizi[0]

    printf("Baslangicta ptr: %d\n", *ptr); // 10

    // Ön Ek Artırma (Prefix Increment)
    // önce pointer'ın yerini 1 ileriye taşı daha sonra da oradaki değeri kullan
    printf("*(++ptr): %d\n", *(++ptr)); // 30 (ptr, dizi[1] -> dizi[2])

    // Son Ek Artırma (Postfix Increment) 
    // önce değeri al ve kullan daha sonra pointer'ın yerini 1 ileriye taşı
    printf("*(ptr++): %d\n", *(ptr++)); // 30 (ptr, dizi[2] -> dizi[3])

    // Ön Ek Azaltma (Prefix Decrement)
    printf("*(--ptr): %d\n", *(--ptr)); // 30 (ptr, dizi[3] -> dizi[2])

    // Son Ek Azaltma (Postfix Decrement)
    printf("*(ptr--): %d\n", *(ptr--)); // 30 (ptr, dizi[2] -> dizi[1])

    // Nihai Değer
    printf("Sonunda ptr: %d\n", *ptr); // 20 (dizi[1])

    return 0;
}
