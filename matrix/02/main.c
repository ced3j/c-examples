// Matris toplama

#include <stdio.h>

#define SIZE 3

int main(){

    int matris1[SIZE][SIZE];
    int matris2[SIZE][SIZE];
    int toplam[SIZE][SIZE];
    int i, j;

    // İlk matris elemanlarını al
    printf("Ilk matrisin elemanlarini girin:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("matris1[%d][%d]: ", i, j);
            scanf("%d", &matris1[i][j]);
        }
    }

    printf("\n------\n");

    // İkinci matris elemanlarını al
    printf("Ikinci matrisin elemanlarini girin:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("matris2[%d][%d]: ", i, j);
            scanf("%d", &matris2[i][j]);
        }
    }

    printf("\n------\n");

    // Matris toplama kısmı
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            toplam[i][j] = matris1[i][j] + matris2[i][j];
        }
    }


    // Toplam matrisini yazdıralım
    printf("Toplam:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d: ", toplam[i][j]);
        }
        printf("\n");
    }

    return 0;
}