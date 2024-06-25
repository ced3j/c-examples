// Pointer ile iki stringi birleştirelim


#include <stdio.h>

void birlestir(char *str1, const char *str2){
    // öncelikle ilk string'in sonuna ulaşalım

    while(*str1 != '\0'){
        str1++;
    }

    
    
    while(*str2 != '\0'){
        *str1 = *str2;
        str2++;
        str1++;
    }
    *str1 = '\0'; 
    
}

int main(){
    char str1[100] = "Hello ";
    char str2[] = "World";
    birlestir(str1, str2);

    printf("%s", str1);
    return 0;
}