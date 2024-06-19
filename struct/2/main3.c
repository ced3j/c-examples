// Ok (arrow) operatörü
// ->
// Kullanım şekli:
// [yapı türünden adres] -> [yapının elemanı]


// p->a ile (*p).a tamamen eşdeğerdir

#include <stdio.h>

struct SAMPLE {
    int age;
    float height;
};

int main() {
    struct SAMPLE person1;  // 'person1' isimli bir struct değişkeni oluşturuluyor
    struct SAMPLE *person2; // 'person2' isimli bir struct işaretçisi oluşturuluyor

    person2 = &person1;     // 'person2' işaretçisi 'person1'in adresini gösteriyor

    // 'person2' işaretçisini kullanarak 'person1' üyelerine erişiliyor ve değer atanıyor
    person2->age = 10;
    person2->height = 157.2;

    // 'person2' işaretçisi kullanılarak 'person1' içindeki 'age' üyesinin değeri yazdırılıyor
    printf("%d", person2->age);

    return 0;
}
