#include <stdio.h>
#include "student.h"


// Öğrenci ekleme
void addStudent(struct Student students[], int *numStudents){
    if(*numStudents >= MAX_STUDENTS){
        printf("Maksimumu öğrenci sayısına ulaşıldı!");
        return;
    }

    struct Student newStudent;
    printf("Öğrenci adı: ");
    scanf("%s", newStudent.name);
    printf("Notlar: ");
    for(int i = 0; i< 5; i++){
        scanf("%d", &newStudent.grades[i]);
    }

    students[*numStudents] = newStudent;
    (*numStudents)++;
}


// Öğrenci bilgilerini yazdır
void printStudents(struct Student students[], int numStudents){
    printf("----- Öğrenci Listesi -----\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("Öğrenci %d:\n", i + 1);
        printf("Adı: %s\n", students[i].name);
        printf("Notları: ");
        for (int j = 0; j < 5; ++j) {
            printf("%d ", students[i].grades[j]);
        }
        printf("\n");
    }
    printf("--------------------------\n");
}