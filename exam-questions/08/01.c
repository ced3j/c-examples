// Aşağıdaki programın çıktısını bulunuz: 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *insertCharSimple(char *str, char ch);


int main() {
    char *result = insertCharSimple("Hello", '!');
    printf("%s", result);
    free(result);
    return 0;
}


char *insertCharSimple(char *str, char ch) {
    int len = strlen(str);
    char *newStr = (char *)malloc(len + 2); 
    int i;


    for (i = 0; i < len; i++) {
        newStr[i] = str[i]; 
        newStr[len] = ch; 
        newStr[len + 1] = '\0'; 
    }

    return newStr;
}
