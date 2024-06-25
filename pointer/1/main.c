/*

Bir string'in uzunluğunu hesaplayan bir C programı yazın. strlen fonksiyonunu kullanmadan, pointerlar kullanarak bu işlemi gerçekleştirin.


 */


#include <stdio.h>


int calculate_length(char *str);

int main(){

    char str[] = "Hello";
    
    int length = calculate_length(str);

    printf("Len: %d", length);

    return 0;
}



int calculate_length(char* str){
    int len = 0;

    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}
