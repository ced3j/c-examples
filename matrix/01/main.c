#include <stdio.h>

int main(){

    int matris[3][3];
    int i, j;

    printf("3x3 matris elemanlari girin: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%5d", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}