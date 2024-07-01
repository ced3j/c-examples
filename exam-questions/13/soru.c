#include <stdio.h>
#include <stdlib.h>


void func(char * input){
    printf("%c", *input);
    if(*(input+1) != '\0')
        func(input+1);
    else
        printf("-");

        
    printf("%c", *input);
}


int main(){
    char *in = "Hello World";
    func(in);
    return 0;
}