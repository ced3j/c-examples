#include <stdio.h>

int global_var1 = 5;
float global_var2 = 10.5;

void func1(int x);
void func2(int y);

int main() {
    int var1 = 3;
    float var2 = 4.5;

    printf("Main Start: var1 = %d, var2 = %.1f, global_var1 = %d, global_var2 = %.1f\n", var1, var2, global_var1, global_var2);

    {
        int var1 = 30;
        float global_var2 = 20.5;
        printf("Block 1: var1 = %d, var2 = %.1f, global_var1 = %d, global_var2 = %.1f\n", var1, var2, global_var1, global_var2);

        func1(var1);

        printf("Block 1 After func1: var1 = %d, var2 = %.1f, global_var1 = %d, global_var2 = %.1f\n", var1, var2, global_var1, global_var2);

        {
            int global_var1 = 50;
            float var2 = 100.5;
            func2(global_var1);

            printf("Block 2: var1 = %d, var2 = %.1f, global_var1 = %d, global_var2 = %.1f\n", var1, var2, global_var1, global_var2);
        }
    }

    printf("Main End: var1 = %d, var2 = %.1f, global_var1 = %d, global_var2 = %.1f\n", var1, var2, global_var1, global_var2);

    return 0;
}

void func1(int x) {
    int global_var1 = 7;
    global_var2 += x;
    printf("func1: x = %d, global_var1 = %d, global_var2 = %.1f\n", x, global_var1, global_var2);
}

void func2(int y) {
    global_var1 += y;
    printf("func2: y = %d, global_var1 = %d, global_var2 = %.1f\n", y, global_var1, global_var2);
}
