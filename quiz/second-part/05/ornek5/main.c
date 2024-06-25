#include <stdio.h>

int main() {
    int var = 5;
    {
        int var = 10;
        printf("%d ", var);
    }
    {
        int var = 15;
        printf("%d ", var);
    }
    printf("%d\n", var);
    return 0;
}
