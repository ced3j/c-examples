#include <stdio.h>


int main(){

    int x = 15, y = 20, z = 30;
    printf("%d %d %d\n", x, y, z);
    {
        int x = 150;
        float y = 200;
        printf("%d %f %d\n", x, y, z);
        {
            int z = 300;
            printf("%d %f %d", x, y, z);
        }
    }

    return 0;
}