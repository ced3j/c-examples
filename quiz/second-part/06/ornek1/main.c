#include <stdio.h>

int main(){

    int dizi[5] = {1,5,3,4,5};
    int *p = dizi;

    p++;


    printf("%d", *p);

    return 0;
}