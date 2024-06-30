/*

    Örnek Soru 1: Basit String Karşılaştırma
    Verilen stringCompare fonksiyonunu tamamlayın. 
    Bu fonksiyon, s1 ve s2 stringlerini karşılaştırır ve:

        s1 küçükse: -1 döner,
        s2 küçükse: 1 döner,
        Eşitse: 0 döner.


    Burada "küçük" olmak, alfabetik sıralamada önce gelmek anlamına gelir.
    Yani, bir karakter dizisi diğerinden önce geliyorsa, o string "küçüktür".


*/




#include <stdio.h>


int stringCompare(const char *s1, const char *s2){
    while(*s1 == *s2){
        if(*s1 == '\0'){
            return 0;
        }
        s1++;
        s2++;
    }

    return (*s1 < *s2) ? -1 : 1;
}


int main(){

    const char *str1 = "apple";
    const char *str2 = "banana";

    printf("Comparison result: %d", stringCompare(str1, str2));

    return 0;
}