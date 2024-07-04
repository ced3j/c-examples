#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    {
        int b = 5;
        a++;
        c = 10;
        printf("a: %d, b: %d, c: %d\n", a, b, c);
        {
            int a = 7;
            b++;
            c++;
            printf("a: %d, b: %d, c: %d\n", a, b, c);
        }
        printf("a: %d, b: %d, c: %d\n", a, b, c);
    }
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    return 0;
}
