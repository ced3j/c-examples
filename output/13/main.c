#include <stdio.h>

int global_x = 100;
float global_y = 200.5;

void nestedFunction(int);

int main() {
    int x = 10, y = 20;
    float z = 30.5;
    printf("Main: x = %d, y = %d, z = %.1f, global_x = %d, global_y = %.1f\n", x, y, z, global_x, global_y);

    {
        int x = 50;
        double y = 60.5;
        printf("Block 1: x = %d, y = %.1f, z = %.1f, global_x = %d, global_y = %.1f\n", x, y, z, global_x, global_y);

        {
            char z = 'A';
            int global_x = 500;
            nestedFunction(global_x);

            printf("Block 2: x = %d, y = %.1f, z = %c, global_x = %d, global_y = %.1f\n", x, y, z, global_x, global_y);
        }
    }

    printf("After blocks: x = %d, y = %d, z = %.1f, global_x = %d, global_y = %.1f\n", x, y, z, global_x, global_y);

    return 0;
}

void nestedFunction(int x) {
    int y = 70;
    float z = 80.5;
    printf("nestedFunction: x = %d, y = %d, z = %.1f, global_x = %d, global_y = %.1f\n", x, y, z, global_x, global_y);
}
