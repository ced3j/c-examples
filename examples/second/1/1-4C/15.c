#include <stdio.h>

#define SUMARRAY(a, n) { int i; for(i = 0; i < (n); i++) sum += a[i]; }

int main() {
    int sum = 0;
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    SUMARRAY(b, 10);
    printf("The sum is %d\n", sum);
    return 0;
}


