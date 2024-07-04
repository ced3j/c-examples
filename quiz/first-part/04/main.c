// Scope Rules

#include <stdio.h>


int main(){
    {
        int x = 10, y = 20;
        printf("x: %d -- y: %d\n", x, y);
        {
            int y = 40;
            x++;
            y++;

            int a = 5;
            printf("x: %d --- y: %d\n", x,y);
            printf("a:%d\n", a);
        }
        printf("x: %d -- y: %d\n", x, y);
    }
}