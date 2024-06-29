#include <stdio.h>

void otherFunction(int x){
    int outerVar = 10;
    printf("outerFunction: x = %d, outerVar = %d\n", x, outerVar);

    void innerFunction(int y){
        int innerVar = 20;
        outerVar += y;
        printf("innerFunction: y %d, innerVar = %d, outerVar = %d\n", y, innerVar, outerVar);
    }

    innerFunction(x);
    printf("outerFunction after innerFunction: outerVar = %d\n", outerVar);
}


int main(){

    int mainVar = 5;
    printf("main: mainVar = %d\n", mainVar);

    otherFunction(mainVar);

    printf("main after otherFunction: mainVar = %d\n", mainVar);

    return 0;
}


