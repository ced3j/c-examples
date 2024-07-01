/*


myInitialize() fonksiyonuna ait prototip aşağıdaki gibidir:
void myInitialize(int *param1, const int rows, const int columns);

myInitialize() fonksiyonu, “rows” adet satıra ve "columns" adet sütuna
sahip iki boyutlu "param1" dizisinin her bir elemanını, elamanın satır ve
sütun indislerinin farkıyla başlatır.



 */


#include <stdio.h>

void myInitialize(int *param1, const int rows, const int columns);

int main (){

    int myArray[5][5];
    int index1, index2;
    myInitialize(&myArray[0][0], 5, 5);



    printf("GUNCELLENMIS DIZI:\n");

    for(index1 = 0; index1 < 5; index1++){

        for(index2 = 0; index2 < 5; index2++){
            printf("%d\t", myArray[index1][index2]);
        }
        printf("\n");
    }

    return 0;
}

void myInitialize(int *param1, const int rows, const int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            *(param1 + i * columns + j) = i - j;
        }
    }
}