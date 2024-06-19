// Structlar ve Pointerlar


#include <stdio.h>

struct PERSON{
    char *name;
    int no;
};

int main(){

    struct PERSON per;
    per.name = "Betelgeuse";
    per.no = 932;
    
    printf("%s", per.name);


    return 0;
}