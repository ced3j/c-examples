/*

strcpy fonksiyonunu kullanmadan, bir string'i diğerine kopyalayan bir C programı yazın. Pointerlar kullanarak bu işlemi gerçekleştirin.


 */

#include <stdio.h>

void copyString(char *dest, char *src);

int main(){

    char *src = "Hello World";
    char dest[50];
    copyString(dest, src);

    printf("Destination: %s", dest);

    return 0;
}


void copyString(char *dest, char *src){
    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    /* 
        eğer dest yani hedef string sonuna '\0' eklemeseydik: 
        hedef string'in sonuna null karakter eklenmediği için destination tam bir string olarak algılanmaz.
        printf fonksiyonu destination string'ini yazdırmaya çalışırken null karaktere ulaşana kadar bellekten okumaya devam eder. 
        Bu durumda bellek sınırları dışına çıkabilir 
        ve beklenmedik sonuçlar veya programın çökmesiyle karşılaşabilirsiniz
    */
}

