#include <stdio.h>

int main() {
    int x = 3, y = 4;
    printf("x: %d, y: %d\n", x, y);
    {
        int y = 7;
        x++;
        printf("x: %d, y: %d\n", x, y);
        {
            int x = 10;
            y++;
            printf("x: %d, y: %d\n", x, y);
        }
        printf("x: %d, y: %d\n", x, y);
    }
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
