#include <stdio.h>
#include <string.h>

void isimleri_yazdir_ve_uzunluklarini_hesapla(int boyut, char* isimler[]) {
    for (int i = 0; i < boyut; i++) {
        printf("Isim: %s, Uzunluk: %lu\n", isimler[i], strlen(isimler[i]));
    }
}

int main() {
    // Karakter dizilerini tanımla
    char* isimler[3] = {"Ali", "Veli", "Ayse"};

    // Fonksiyonu çağır
    isimleri_yazdir_ve_uzunluklarini_hesapla(3, isimler);

    return 0;
}
