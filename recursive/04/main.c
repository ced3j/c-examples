// Recursive fonksiyon: Sayının pozitif olup olmadığını kontrol eder

#include <stdio.h>


int isPositive(int n) {
    // Temel durum: Sayı 0 veya negatif olduğunda
    if (n <= 0) {
        return 0; // Negatif veya sıfır ise, pozitif değil
    }

    // Temel durum: Sayı 1 olduğunda
    if (n == 1) {
        return 1; // 1 ise, pozitif
    }

    // Recursive durum: Sayıyı 1 azaltarak kontrol et
    return isPositive(n - 1);
}

int main() {
    int num = 5;
    if (isPositive(num)) {
        printf("%d pozitiftir.\n", num);
    } else {
        printf("%d pozitif değildir.\n", num);
    }
    return 0;
}
