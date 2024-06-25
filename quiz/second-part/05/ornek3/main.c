#include <stdio.h>

int main() {
    int p = 7, q = 14;
    {
        int q = 21;
        printf("%d %d\n", p, q);
        {
            int p = 28;
            printf("%d %d\n", p, q);
        }
        printf("%d %d\n", p, q);
    }
    printf("%d %d\n", p, q);
    return 0;
}