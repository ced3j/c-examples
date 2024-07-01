// Diziyi karakter karakter işlemek

#include <stdio.h>

void processChars(char *input) {
    if(*input == '\0')
        return;
    printf("%c-", *input);
    processChars(input + 1);
}

int main() {
    char *in = "Hello";
    processChars(in);
    return 0;
}