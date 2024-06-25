// Void Pointer ( Boş işaretçi )

/* 
Boş işaretçiler herhangi bir veri türünü işaret edebilir ama 
doğrudan dereference yapılamazlar 
Öncelikle boş işaretçiyi doğru türe dönüştürmeliyiz
 */


#include <stdio.h>

int main(){

    int num = 10;
    void *voidPtr = &num;
    printf("value of num: %d", *(int *)voidPtr);

    return 0;
}