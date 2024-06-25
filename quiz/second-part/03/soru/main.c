/*

Aşağıda verilen fonksiyon hangi görevi icra etmektedir?


char *mysteryFunc(char *s1, const char *s2, unsigned n){

    unsigned c;
    char *ptr = s1;

    for( ; *s1 != '\0'; s1++)
        ;
    
    for(c = 0; c < n && (*s1 = *s2); s1++, s2++, c++)
        ;

    *s1 = '\0';

    return ptr;
}

 */





/*

Bu fonksiyonun genel görevi, s1 işaretçisinin gösterdiği karakter dizisinin sonuna, 
s2 işaretçisinin gösterdiği karakter dizisinden en fazla n karakteri eklemektir. 
Sonrasında s1 ile işaretlenen karakter dizisinin sonuna '\0' (NULL) karakteri eklenir 
ve başlangıçtaki s1 işaretçisinin adresi geri döndürülür.


 */







#include <stdio.h>



// C dilinde bir fonksiyonun isminin önünde * (yıldız) işareti olması, fonksiyonun bir işaretçi (pointer) döndürdüğünü belirtir. 
// Yani, char *mysteryFunc(...) ifadesinde mysteryFunc isminin önündeki 
// * işareti, bu fonksiyonun bir char türünden işaretçi (pointer) döndüreceğini gösterir.

char *mysteryFunc(char *s1, const char *s2, unsigned n){

    unsigned c;
    char *ptr = s1;


    // döngü, sadece içerideki koşul kontrol edilerek çalışır. çünkü ilk parametresi yok ";"
    // Bu döngü, s1 işaretçisi '\0' karakterini görene kadar (s1 işaretçisi karakter dizisinin sonuna gelene kadar) devam eder
    for( ; *s1 != '\0'; s1++)
        ;
    

    // Bu for döngüsü s2 işaretçisinin gösterdiği karakter dizisinden en fazla n karakteri s1 işaretçisinin gösterdiği karakter dizisinin sonuna kopyalamaktadır.
    for(c = 0; c < n && (*s1 = *s2); s1++, s2++, c++)
        ;

    // (*s1 = *s2): Bu ifade, s2 işaretçisinin gösterdiği karakteri s1 işaretçisinin gösterdiği yere kopyalar 
    // ve kopyalama işlemi başarılı olduğu sürece (*s2 karakteri '\0' (NULL) olmadığı sürece) döngü devam eder.




    *s1 = '\0';

    return ptr;
}


int main(){
        
    char str1[20] = "Hello";
    const char *str2 = "World";
    unsigned int num = 3;

    char *result = mysteryFunc(str1, str2, num);

    printf("Sonuc: %s\n", result); // Çıktı: HelloWor


    return 0;
}