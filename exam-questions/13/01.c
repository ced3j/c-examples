/*

Diziyi Tersten Yazdırma

*/
#include <stdio.h>

void reversePrint(char *input){
    if(*input == '\0'){
        return;
    }
    
    reversePrint(input + 1);
    printf("%c", *input);

}

int main(){
    char *in = "Hello World";
    reversePrint(in);
    return 0;
}