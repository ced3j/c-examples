#include <stdio.h>

void isimleri_yazdir(int boyut, char* isimler[]) {
    for (int i = 0; i < boyut; i++) {
        printf("%s\n", isimler[i]);
    }
}

int main() {
    // Karakter dizilerini tanımla
    char* isimler[3] = {"Ali", "Veli", "Ayse"};

    // Fonksiyonu çağır
    isimleri_yazdir(3, isimler);

    return 0;
}
