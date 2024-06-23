// Aşağıdaki programın çıktısı nedir?


#include <stdio.h>
#include <stdlib.h>

int main(){
    int dizi[15] = {1, 20, 3}, i;
    int *ptr = &dizi[3];
    int *qtr = ptr+2;
    
    for(i = 3; i <= 9; i++){
        dizi[i] = dizi[i-2]+1;
    }

    *(++qtr) = *(++ptr);
    qtr++;
    *(qtr++) = *(ptr++);
    printf("%d %d %d\n", *dizi + *qtr - *ptr, qtr-ptr, *ptr-*qtr);

    for(i = 4; i < 7; i++){
        printf(" %d", dizi[i]);
    }
    
    return 0;
}

