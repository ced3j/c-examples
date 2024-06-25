#include <stdio.h>


struct PERSON{
    char name[32];
    int no;
};

int main(void){
    struct PERSON per = { "Betel", 123 };
    char ch; 
    ch = per.name[3]; // e
    putchar(ch); // putchar -> sadece tek karakter çıktısı verir 
    return 0;
}