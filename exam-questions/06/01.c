#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float numerator;
    float denominator;
} fraction;

void add_fraction(fraction *a, fraction *b, fraction *c) {
    c->numerator = a->numerator * b->denominator + b->numerator * a->denominator;
    c->denominator = a->denominator * b->denominator;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


void simplify(fraction *f3){

    float div; int i;
    if(f3->numerator > f3->denominator){
        div = f3->denominator;
    }
    else{
        div = f3->numerator;
    }

    for(i = (int)div; i > 0; i--){
        if((int)f3->numerator % i == 0 && (int)f3->denominator % i == 0){
            f3->numerator = f3->numerator / i;
            f3->denominator = f3->denominator / i;
            break;
        }
    }
}


int main() {
    float n1, d1;
    float n2, d2;

    printf("Kesirli birinci sayiyi pay ve payda arasinda bir bosluk olacak sekilde girin: ");
    scanf("%f %f", &n1, &d1);

    printf("Kesirli ikinci sayiyi pay ve payda arasinda bir bosluk olacak sekilde girin: ");
    scanf("%f %f", &n2, &d2);

    fraction f1 = {n1, d1};
    fraction f2 = {n2, d2};
    fraction result;

    add_fraction(&f1, &f2, &result);
    simplify(&result);

    printf("Sonuc: %d/%d\n", (int)result.numerator, (int)result.denominator);

    return 0;
}

