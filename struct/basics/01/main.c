#include <stdio.h>


struct Student{
    int age;
    int no;
    char name[50];
    float grades;
};

int main(){

    struct Student student1;

    printf("Please enter the student's name: ");
    scanf("%s", &student1.name);

    printf("Please enter the student's age: ");
    scanf("%d", &student1.age);

    printf("Please enter the student's no: ");
    scanf("%d", &student1.no);

    printf("Please enter the student's grades: ");
    scanf("%f", &student1.grades);


    printf("---- Ogrenci Bilgileri ----\n");
    printf("Ogrenci adi: %s\n", student1.name);
    printf("Ogrenci numarasi: %d\n", student1.no);
    printf("Ogrenci yasi: %d\n", student1.age);
    printf("Ogrenci not ortalamasi: %.2f\n", student1.grades);
    
    return 0;
}