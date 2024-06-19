// Pointer ve String kullanımı

#include <stdio.h>

// string uzunluğunu hesapla
int stringLength(char *str){
    int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}

int main() {
    char name[] = "Beteljesed";
    printf("Name length: %d", stringLength(name));
    return 0;
}
