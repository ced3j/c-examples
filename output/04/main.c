#include <stdio.h>

int main(){
    int a = 5; 
    int b = 10;
    int c = 15;
    int result;

    result = ++a + b--;


    printf("After first operation: a = %d, b = %d, result = %d\n", a, b, result);

    result = c-- + --b + a++;
    printf("After second operation: a = %d, b = %d, c = %d, result = %d\n", a, b, c, result);

    result = ++a - --c + b++ - --b;
    printf("After third operation: a = %d, b = %d, c = %d, result = %d\n", a, b, c, result);



    return 0;
}


