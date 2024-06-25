#include <stdio.h>

struct POINT{
    int x, y;
};

int main(){

    struct POINT pt;
    struct POINT *ppt;

    ppt = &pt;

    ppt->x = 10;  // (*ppt).x  ile aynı işlem
    ppt->y = 20;

    printf("(%d, %d)\n", ppt->x, ppt->y);

    return 0;
}