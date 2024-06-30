// String kopyala

#include <stdio.h>


void stringCopy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null karakter ekle
}

int main() {
    const char *source = "Copy me!";
    char destination[20];
    
    stringCopy(destination, source);
    printf("Copied string: %s\n", destination);
    
    return 0;
}
