// Bir diziyi işaretçi ve indis notasyonu ile yazdıralım.



#include <stdio.h>


// indis notasyonu ile yazdırma
void printStringByIndex(const char *str){
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
    printf("\n");
}



// işaretçi notasyonu ile yazdırma
void printStringByPointer(const char *str){
    while(*str != '\0'){
        printf("%c", *str);
        str++;
    }
    printf("\n");
}



int main(){
    const char *myString = "Hello World";
    printStringByIndex(myString);
    printStringByPointer(myString);
    
    return 0;
}