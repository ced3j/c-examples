// Pointer kullanarak bir string'i ters çevirmeyi deneyelim

#include <stdio.h>

void stringReverse(char *str){
    char *start = str;
    char *end = str;

    while(*end != '\0'){
        end++;
    }
    end--; // en sondaki \0 ifadesini silmek için

    while(start < end){
        char temp = *start;
        *start = *end; // terse çevirmek için sondaki karakteri başa alıyoruz
        *end = temp; // en baştakini de temp değişkeninde tutmuştuk, sona alıyoruz
        start++;
        end--; // start ve end'i arttırıp azaltarak yer değiştirme yapıyoruz
    }
}

int main(){
    
    char str[] = "HelloWorld!";
    stringReverse(str);

    printf("%s", str);

    return 0;
}
