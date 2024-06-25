// Fonksiyonlarda boş işaretçi kullanmak


#include <stdio.h>

void printValue(void *ptr, char type){
    if(type == 'i'){
        printf("Integer: %d\n", *(int *)ptr);
    }else if(type == 'f'){
        printf("Float: %.2f\n", *(float *)ptr);
    }
}

int main(){

    int num = 10;
    float fnum = 20.5;

    printValue(&num, 'i');
    printValue(&fnum, 'f');


    return 0;
}