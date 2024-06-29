#include <stdio.h>


void isimleri_yazdir(size_t boyut, char* isimler[boyut]);

int main(){

    char* isim = "Isim1";
    char* isimler[5] = {isim, "Isim2", "Isim3", "Isim4", "Isim5"};

    isimleri_yazdir(5, isimler);

    return 0;
}


void isimleri_yazdir(size_t boyut, char* isimler[boyut]){
    char* ptr = NULL;
    for(int i = 0; i < boyut; i++){
        ptr = *(isimler + i);
        
        while(*ptr != '\0'){
            printf("%c", *ptr);
            ptr++;
        }
        puts("-");
    }
}