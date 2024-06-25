#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char *str;

    str = (char *)malloc(50 * sizeof(char)); // 50 karakterlik bellek tahsisi

    if(str == NULL){
        printf("Bellek tahsisi basarisiz!\n");
        return 1;
    }

    printf("Bir cumle girin: ");
    scanf(" %49[^\n]", str); // Kullanıcıdan en fazla 49 karakterlik bir girdi alır
    printf("Girdiginiz cumle: %s\n", str);

    free(str);
}