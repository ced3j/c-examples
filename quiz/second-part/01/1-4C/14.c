// MAKRO kullanımı

#include <stdio.h>

#define SQUARE(x) ((x) * (x))
// ilk paranteze parametreleri gönderiyoruz boşluktan sonraki kısım işlem kısmı

#define WIDTH 10
#define HEIGHT 5



#define MIN(a, b) ((a) < (b)) ? (a) : (b)
// koşul içi doğruysa soru işaretinden hemen sonrakini yani (a)
// koşul yanlışsa :'dan sonrakini yani (b)'yi geri döndürür


int main(){

    int num = 5;
    printf("Square of %d is: %d\n\n", num, SQUARE(num));


    int summary = WIDTH + HEIGHT;
    printf("Summary of %d + %d is : %d\n\n", WIDTH, HEIGHT, summary);



    int x = 10, y = 20;
    printf("En kucuk deger: %d\n\n", MIN(x,y));



    return 0;
}