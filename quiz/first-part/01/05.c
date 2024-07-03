#include <stdio.h>

int main() {
    int a = 7, b = 3, c = -5;
    int result = a * (b++) - (c--) + b * (++c);
    printf("%d\n", result);
    return 0;
}
