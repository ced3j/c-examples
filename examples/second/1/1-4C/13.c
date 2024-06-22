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
    char *name2 = "Betetldskdlsgds";
    
    printf("Name length: %d", stringLength(name));
    printf("Name length: %d", stringLength(name2));
    
    return 0;
}
