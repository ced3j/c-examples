#include <stdio.h>

int main(){

    int a = 15;
    {
        int a = 10;
        {
            int a = 15;
            printf("%d\n", a);
        }
        printf("%d\n", a);
    }
    printf("%d\n", a);

    return 0;
}


/*

15
10
15

 */