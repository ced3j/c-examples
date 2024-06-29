/*
Kompleks sayılar, matematik ve mühendislikte yaygın olarak kullanılır ve genellikle şu şekilde yazılır: 
𝑧 = 𝑎 + 𝑏𝑖
z=a+bi, burada:

    a reel(gerçek) kısmı temsil eder
    b sanal(imajiner) kısmı temsil eder ve i sanal birim 
    yani kök içinde -1'i temsil eder

 */


#include <stdio.h>

typedef struct{
    double real;
    double imag;
} COMPLEX;


void printComplex(COMPLEX c){
    printf("Complex Number: %.2f + %.2fi\n", c.real, c.imag);
}

int main(){

    COMPLEX c1;
    c1.real = 3.0;
    c1.imag = 4.0;

    printComplex(c1);

    return 0;
}