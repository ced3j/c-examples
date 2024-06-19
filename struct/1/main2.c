


#include <stdio.h>


/*
Aynı türden iki yapı nesnesi birbirlerine atanabilir. 
Bu durumda yapının karşılıklı elemanları birbirlerine
atanmaktadır
 */
struct SAMPLE{
    int a;
    long b;
    double c;
};


struct PERSON{
    char name[32];
    int no;
};



int main(){
    
    struct SAMPLE s = {10, 20, 45.3};
    struct SAMPLE k;

    k = s;

    printf("%d  %ld %f\n", s.a, s.b, s.c);
    printf("%d  %ld %f\n\n", k.a, k.b, k.c);
    // Aynı çıktıyı verirler



    /// ------------------------ /// 


    struct PERSON per;
    printf("Adi soyadi: ");

    gets(per.name);
    printf("No: ");
    scanf("%d", &per.no);

    printf("\n\n%s  %d\n\n", per.name, per.no);



    return 0;
}