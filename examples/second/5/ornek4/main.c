#include <stdio.h>

int main() {
    int i = 10;
    {
        int i = 20;
        {
            int i = 30;
            printf("%d ", i);
        }
        printf("%d ", i);
    }
    printf("%d\n", i);
    return 0;
}
