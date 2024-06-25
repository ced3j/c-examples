// gcc -o app main.c math_functions.c   ---> Derle
// ./main  ---> main.exe'yi çalıştır


// main.c
#include <stdio.h>
#include "./math_functions.h"

int main() {
    int x = 10;
    int y = 5;

    int sum = add(x, y);
    int difference = subtract(x, y);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}
