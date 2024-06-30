/*


Açıklama: İki kesirli sayıyı toplayacak ve sonuç kesri gösterecek bir C programının main fonksiyonu aşağıda
verilmektedir. Program kullanıcıdan kesir 1 ve kesir 2'yi girmesini isteyecektir. Her kesrin pay ve paydası boşlukla
ayrı ayrı girilir.
Aşağıdaki örnek çıktı verilmektedir.
Kesirli birinci sayının pay ve payda arasına bir boşluk bırakarak girin):1 2
Kesirli ikinci sayının pay ve payda arasına bir boşluk bırakarak girin):2 5
Sonuç: 9/10





4. SORU: Main fonksiyonunda kullanılan fraction türetilmiş veri tipinin bu şekilde kullanılabilmesi için gerekli struct
yapısını ve struct üyelerini main fonksiyonundan yararlanarak oluşturunuz.( In order to use the fraction derived
data type used in the main function in this way, create the necessary struct structure and struct members by using
the main function.)(15p)









5. SORU: Main fonksiyonunda add_fraction fonksiyonuna parametre olarak geçilen f3, f4 ve f5 değişkenlerini fonksiyon
prototiplerinden ve mainden yararlanarak kesikli çizgi ile boş bırakılan yere tanımlayınız. (f3 birinci girilen kesri,
f4 ikinci girilen kesri ve f5 de toplam kesri ifade etmektedir.) (b) Define the f3, f4 and f5 variables passed as
parameters to the add_fraction function in the main function, using the function prototypes and main, in the space
left blank with a dashed line. (f3 represents the first entered fraction, f4 the second entered fraction, and f5 the total
fraction.) (15p)







#include <stdio.h>
#include <stdlib.h>

void add_fraction(fraction *a, fraction *b, fraction *c);
void simplify(fraction *f3);

int main(){

    float n1, d1; 
    float n2, d2;

    printf("Kesirli birinci sayıyı pay ve payda arasında bir boşluk olacak şekilde girin: ");
    scanf("%f%f", &n1, &d1);

    printf("Kesirli birinci sayıyı pay ve payda arasında bir boşluk olacak şekilde girin: ");
    scanf("%f%f", &n2, &d2);

    fraction f1 = {n1, d1};
    fraction f2 = {n2, d2}; 

    ......
    ......
    ......



    add_fraction(f3, f4, f5);
    simplfy(f5);
    printf("Sonuç: %d%d", (int)f5->n, (int)f5->d);
    printf("\n");

    return 0;

}










*/




/*



6. SORU(a) : İki kesri toplayan add_fraction fonksiyonunu yazınız. (Bunun için ayrılan iki satır yeterli olacaktır) Write the
add_fraction function that adds two fractions. (Two lines reserved for this will suffice)(10p)



6. SORU(b) : İki kesrin toplamı sonucunda elde edilen kesri sadeleştiren simplify fonksiyonunda boş bırakılan iki satırı
doldurunuz. (Örneğin iki kesrin toplamının 8/12 çıkması durumunda simplify fonksiyonu, sadeleştirme sonucunda
bu kesri 2/3 olarak döndürmektedir)





 */