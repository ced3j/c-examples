/*

(Aşağıda verilen main() fonksiyonu bir karakter dizisini başlatır, ekranda görüntüler ve ardından karakter dizisini bir argüman olarak özyinelemeli fonksiyona
iletir. Bir karakter dizisini argüman olarak alan, karakter dizisini ters sırada yazdıran ve hiçbir sey döndürmeyen özyinelemeli bir stringReverse() fonksiyonu
yazın. Fonksiyon, karakter dizisinin sonlandırıcı bos karakteriyle (null) karşılaşıldığında işlemeyi durdurmalı ve geri dönmelidir. (Not: i) Örnek ekran çıktısı aşağıda
verilmistir))

Print this string backward.
«drawkcab gnirts siht tnirP

*/


#include <stdio.h>
#define SIZE 30

void stringReverse(char strArray[]);

int main(){
    int loop;
    char strArray[SIZE] = "Print this string backward.";

    for(loop = 0; loop < SIZE; loop++){
        printf("%c", strArray[loop]);
    }

    printf("\n");
    stringReverse(strArray);
    printf("\n");

    return 0;
}

void stringReverse(char strArray[]){
    int i;
    for(i = SIZE -1; i >= 0; i--){
        if(strArray[i] != '\0'){
            printf("%c", strArray[i]);
            strArray[i] = '\0';
            stringReverse(strArray);
            break;
        }
    }
}