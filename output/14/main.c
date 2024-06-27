#include <stdio.h>

int global_a = 1;
double global_b = 2.5;

void modifyValues(int a);

int main() {
    int a = 5, b = 10;
    float c = 15.5;
    printf("Main Start: a = %d, b = %d, c = %.1f, global_a = %d, global_b = %.1f\n", a, b, c, global_a, global_b);

    {
        int a = 50;
        float b = 100.5;
        printf("Block 1: a = %d, b = %.1f, c = %.1f, global_a = %d, global_b = %.1f\n", a, b, c, global_a, global_b);

        {
            float c = 200.5;
            int global_a = 500;
            modifyValues(global_a);

            printf("Block 2: a = %d, b = %.1f, c = %.1f, global_a = %d, global_b = %.1f\n", a, b, c, global_a, global_b);
        }
    }

    printf("Main End: a = %d, b = %d, c = %.1f, global_a = %d, global_b = %.1f\n", a, b, c, global_a, global_b);

    return 0;
}

void modifyValues(int a) {
    int b = 7;
    double c = 3.3;
    global_a += a;
    global_b += c;
    printf("modifyValues: a = %d, b = %d, c = %.1f, global_a = %d, global_b = %.1f\n", a, b, c, global_a, global_b);
}
