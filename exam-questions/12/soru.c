/*

    myAddition() fonksiyonuna ait prototip aşağıdaki gibidir:
    void myAddition(int param1[][2], int param2[][2], const int rows,
    const int columns);
    myAddition() fonksiyonu, “rows” adet satıra ve "columns" adet sütuna sahip
    iki boyutlu "param1" ve "param2" dizilerinin matris toplamını bulur ve
    toplam sonucunu "param1" dizisinde saklar.



    --------DOĞRU ÇIKTI:-----
MATRIS TOPLAM SONUCU:
1 3
3 4

*/


#include <stdio.h>
void myAddition(int param1[][2], int param2[][2], const int rows, const int columns);
int main (){

    int myArray1[2][2] = {{0, 1}, {0, 0}};
    int myArray2[2][2] = {{1, 2}, {3, 4}};
    int index1, index2;myAddition(myArray1, myArray2 , 2, 2);

    printf("MATRIS TOPLAM SONUCU:\n");
    for(index1 = 0; index1 < 2; index1++){
        for(index2 = 0; index2 < 2; index2++){
            printf("%d\t", myArray1[index1][index2]);
        }
        printf("\n");
    }
    return 0;
}

// Matris toplama fonksiyonu
void myAddition(int param1[][2], int param2[][2], const int rows, const int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            param1[i][j] += param2[i][j];  // Matris toplama işlemi
        }
    }
}
