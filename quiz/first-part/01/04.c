#include <stdio.h>

int main() {
    int x = 5, y = 10, z = 3;
    int result = (x++ + --y) * z - y / x;
    printf("%d\n", result);
    return 0;
}
