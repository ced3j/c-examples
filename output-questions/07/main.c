#include <stdio.h>

int global_var = 10;

void innerFunction(int);

void outerFunction(int x) {
    int local_var = 20;
    printf("%d %d %d\n", x, local_var, global_var);

    innerFunction(x + local_var);

    printf("%d %d\n", local_var, global_var);
}

void innerFunction(int y) {
    int local_var = 30;
    global_var += y;
    printf("%d %d %d\n", y, local_var, global_var);
}

int main() {
    int main_var = 5;
    printf("%d %d\n", main_var, global_var);

    outerFunction(main_var);

    printf("%d %d\n", main_var, global_var);

    return 0;
}
