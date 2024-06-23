#include <stdio.h>

int main(){

    int x = 100;
    {
        int y = 200;
        printf("%d %d\n", x, y);
        {
            int x = 300;
            y = 400; // y değiştirilebilir
            printf("%d %d\n", x, y);
        }
        printf("%d %d\n", x,y);

    }

    return 0;
}