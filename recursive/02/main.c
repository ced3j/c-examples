// Recursive ve pointer ile bir string'in uzunluğunu hesapla


#include <stdio.h>

int hesapla(char *str){
    if(*str == '\0'){
        return 0;
    }

    return 1 + hesapla(str + 1);
}


int main(){

    char str[] = "Bu str'nin uzunluğunu bulalım.";
    int result = hesapla(str);
    printf("Sonuc --> %d", result);
    return 0;
}