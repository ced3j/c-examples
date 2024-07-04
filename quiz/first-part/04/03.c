#include <stdio.h>

void staticFunction() {
    static int count = 0;
    count++;
    printf("count: %d\n", count);
}

int main() {
    for (int i = 0; i < 3; i++) {
        staticFunction();
    }
    return 0;
}
