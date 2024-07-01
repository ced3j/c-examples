#include <stdio.h>

// Sabit bir karakter dizisini döndüren fonksiyon

char* getString(){
    return "Hello, world!";
}


int main(){
    char* str = getString();
    printf("Donen string: %s\n", str);
    
    return 0;
}