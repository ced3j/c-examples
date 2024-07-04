#include <stdio.h>

void recursiveFunction(int n) {
    if (n > 0) {
        int x = n;
        printf("x: %d\n", x);
        recursiveFunction(n - 1);
        printf("x after recursion: %d\n", x);
    }
}

int main() {
    int x = 5;
    recursiveFunction(3);
    printf("x in main: %d\n", x);
    return 0;
}
