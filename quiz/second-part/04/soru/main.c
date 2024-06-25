#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *func(char *s, char c, int num){
    char *ptr = (char *)malloc(strlen(s) + 2);
    int k;
    for(k = 0; k < num; k++){
        ptr[k] = s[k];
    }

    ptr[num] = c;
    for(k = num; k < strlen(s); k++){
        ptr[k+1] = s[k];
    }

    return ptr;
}


int main(){
    char *word1 = "Hello World";
    char c = 'o';
    int num = 4;
    printf("%s", func(word1, c, num));
    return 0;
}