#include <stdio.h>

int globalVar = 10;

void modifyLocalVar() {
    int localVar = 5;
    {
        int localVar = 20;
        printf("Inside block: localVar = %d\n", localVar);
    }
    printf("Outside block: localVar = %d\n", localVar);
}

void modifyGlobalVar() {
    globalVar += 5;
}

int main() {
    int localVar = 3;

    printf("Initial globalVar = %d\n", globalVar);
    modifyGlobalVar();
    printf("After modifyGlobalVar: globalVar = %d\n", globalVar);

    printf("Initial main localVar = %d\n", localVar);
    modifyLocalVar();
    printf("Final main localVar = %d\n", localVar);

    return 0;
}
