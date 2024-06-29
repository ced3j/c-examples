#include <stdio.h>

int global_x = 10;
double global_y = 20.5;

void functionA(int x);

int main() {
    int x = 1, y = 2;
    printf("Main Start: x = %d, y = %d, global_x = %d, global_y = %.1f\n", x, y, global_x, global_y);

    {
        int x = 100;
        double y = 200.5;
        printf("Block 1: x = %d, y = %.1f, global_x = %d, global_y = %.1f\n", x, y, global_x, global_y);

        {
            int y = 300;
            double global_y = 400.5;
            functionA(y);

            printf("Block 2: x = %d, y = %d, global_x = %d, global_y = %.1f\n", x, y, global_x, global_y);
        }
    }

    printf("Main End: x = %d, y = %d, global_x = %d, global_y = %.1f\n", x, y, global_x, global_y);

    return 0;
}

void functionA(int x) {
    int y = 5;
    global_x += x;
    global_y += y;
    printf("functionA: x = %d, y = %d, global_x = %d, global_y = %.1f\n", x, y, global_x, global_y);
}
