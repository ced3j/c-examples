#include <stdio.h>
#include <math.h>

struct Complex{
    double real; // gerçel kısım
    double imag; // sanal kısım
};


// İki kompleks sayıyı toplayan fonksiyon
struct Complex add(struct Complex c1, struct Complex c2){
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}


// İki kompleks sayıyı çıkaran fonksiyon
struct Complex subtract(struct Complex c1, struct Complex c2){
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

void printComplex(struct Complex c){
    if(c.imag >= 0){
        printf("%.2f + %.2fi\n", c.real, c.imag);
    }else{
        printf("%.2f - %.2fi\n", c.real, fabs(c.imag));
    }
    // fabs fonksiyonu, float veya double  --> mutlak değer

}


int main(){
    struct Complex c1 = {3.0, 4.0}; 
    struct Complex c2 = {1.0, -2.0};

    struct Complex sum = add(c1, c2);
    printf("Toplam: ");
    printComplex(sum);

    struct Complex difference = subtract(c1, c2);
    printf("Fark: ");
    printComplex(difference);

    return 0;
}