// Hem işaretçi hem de işaret ettiği veri sabit olduğunda...

#include <stdio.h>

int main(){
    char name[30] = 'Hello World!';
    const char * const greeting = name;

    // greeting = 'New Greeting'; --- HATA. 
    //    greeting zaten şu an "Hello World!" değerini tutuyor ve const olduğu için değişmez

    // *(greeting + 5) = 'o'; --- HATA.
    //     const veri değiştirilemez

    return 0;
}