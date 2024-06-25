#include <stdio.h>


struct SAMPLE{
    int a;
    long b;
    double c;
};


struct SAMPLE_TWO{
    int a;
    long b;
    double c;
};


int main(){

    struct SAMPLE ornekNesne;
    ornekNesne.a = 10;
    ornekNesne.b = 20;
    ornekNesne.c = 25.1;

    printf("%d\t %ld\t %f\n\n", ornekNesne.a, ornekNesne.b, ornekNesne.c);


    struct SAMPLE_TWO ornekNesne2 = {15, 20, 533.1};

    printf("%d\t %ld\t %f", ornekNesne2.a, ornekNesne2.b, ornekNesne2.c);

    return 0;
}