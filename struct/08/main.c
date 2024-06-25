#include <stdio.h>
#include <string.h>


typedef struct{
    char name[50];
    int age;
    char department[50];
    float grades[5];
} Student;


void printStudent(const Student *s);
void updateStudent(Student *s, const char *name, int age, const char *department, const float grades[]);
float calculateAverage(const Student *s);


int main(){

    Student student1;
    Student student2;

    float grades1[5] = {90.5, 88.0, 75.5, 35.0, 63.0};
    float grades2[5] = {66.3, 62.0, 75.1, 99.3, 35.8};

    updateStudent(&student2, "Ahmet", 23, "Bilgisayar Mühendisliği", grades1);
    updateStudent(&student1, "Derin", 3, "Felsefe", grades2);

    printStudent(&student1);
    printStudent(&student2);

    printf("Average grade for %s: %.2f\n", student1.name, calculateAverage(&student1));
    printf("Average grade for %s: %.2f\n", student2.name, calculateAverage(&student2));

    return 0;
}


/*

Bu fonksiyon, Student yapısını sadece okumak için kullanıyor. Öğrencinin bilgilerini ekrana yazdırıyor, 
fakat bu bilgiler üzerinde herhangi bir değişiklik yapmıyor. Bu nedenle, Student yapısının bir işaretçisi 
const olarak tanımlanmıştır. Bu, fonksiyonun içinde s işaretçisi ile gösterilen Student yapısının
içeriğinin değiştirilmesini engeller.

*/
void printStudent(const Student *s){
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Department: %s\n", s->name);
    printf("Grades: %.2f, %.2f, %.2f, %.2f, %.2f\n\n", s->grades[0], s->grades[1], s->grades[2], s->grades[3], s->grades[4]);
}



void updateStudent(Student *s, const char *name, int age, const char *department, const float grades[]){
    strcpy(s->name, name);
    s->age = age;
    strcpy(s->department, department);
    for(int i = 0; i < 5; i++){
        s->grades[i] = grades[i];
    }
}


float calculateAverage(const Student *s){
    float sum = 0.0;
    for(int j = 0; j < 5; j++){
        sum += s->grades[j];
    }
    return sum / 5;
}