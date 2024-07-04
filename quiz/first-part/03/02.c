// Öğrenci not hesaplama

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    double marks[3];
};

double calculateAverage(struct Student s) {
    double sum = 0.0;
    for(int i = 0; i < 3; i++) {
        sum += s.marks[i];
    }
    return sum / 3;
}

int main() {
    struct Student student = {"Ali", 20, {85.5, 90.0, 78.5}};
    
    printf("Ogrenci: %s\n", student.name);
    printf("Yas: %d\n", student.age);
    printf("Ortalama Not: %.2f\n", calculateAverage(student));

    return 0;
}
