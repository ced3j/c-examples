// Boş işaretçileri farklı veri türleri için kullanmak


#include <stdio.h>

int main(){

    int num = 10;
    float fnum = 3.14;
    void *voidPtr;

    
    voidPtr = &num;
    printf("Value of num: %d\n\n", *(int *)voidPtr);

    voidPtr = &fnum;
    printf("Value of fnum: %.2f", *(float *)voidPtr);

    return 0;
}