#include <stdio.h>
#include <string.h>

// İsimleri alfabetik olarak sırala
void isimleri_sirala(int boyut, char* isimler[]) {
    char* temp;
    for (int i = 0; i < boyut - 1; i++) {
        for (int j = i + 1; j < boyut; j++) {
            if (strcmp(isimler[i], isimler[j]) > 0) {
                temp = isimler[i];
                isimler[i] = isimler[j];
                isimler[j] = temp;
            }
        }
    }
}

// İsimleri uzunluklarına göre gruplandır ve yazdır
void isimleri_gruplandir(int boyut, char* isimler[]) {
    int uzunluklar[boyut];
    int max_uzunluk = 0;
    
    // Her ismin uzunluğunu hesapla ve en uzun ismi bul
    for (int i = 0; i < boyut; i++) {
        uzunluklar[i] = strlen(isimler[i]);
        if (uzunluklar[i] > max_uzunluk) {
            max_uzunluk = uzunluklar[i];
        }
    }
    
    // Uzunluklarına göre gruplandır ve yazdır
    for (int u = 1; u <= max_uzunluk; u++) {
        printf("Uzunlugu %d olan isimler:\n", u);
        for (int i = 0; i < boyut; i++) {
            if (uzunluklar[i] == u) {
                printf("  %s\n", isimler[i]);
            }
        }
    }
}

int main() {
    // Karakter dizilerini tanımla
    char* isimler[5] = {"Ali", "Veli", "Ayse", "Fatma", "Ahmet"};
    
    // İsimleri sırala
    isimleri_sirala(5, isimler);
    
    // Sıralanmış isimleri yazdır
    printf("Siralanmis Isimler:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", isimler[i]);
    }
    
    // İsimleri uzunluklarına göre gruplandır ve yazdır
    printf("\n\nIsimlerin Uzunluklarina Gore Gruplandirilmasi:\n\n");
    isimleri_gruplandir(5, isimler);
    
    return 0;
}
