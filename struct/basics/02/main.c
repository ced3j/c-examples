#include <stdio.h>

#define MAX_STUDENTS 3  // Maximum öğrenci sayısı

// Öğrenci bilgilerini saklayan struct tanımı
struct Student {
    int studentID;
    float grade;
};

// Ders bilgilerini saklayan struct tanımı
struct Course {
    char courseCode[10];
    char courseName[50];
    struct Student students[MAX_STUDENTS];
};

int main() {
    struct Course course;
    
    // Ders bilgilerini al
    printf("Ders kodunu girin: ");
    scanf("%s", course.courseCode);
    
    printf("Ders ismini girin: ");
    scanf("%s", course.courseName);
    
    // Öğrenci bilgilerini al
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Ogrenci %d numarasini girin: ", i + 1);
        scanf("%d", &course.students[i].studentID);
        
        printf("Ogrenci %d notunu girin: ", i + 1);
        scanf("%f", &course.students[i].grade);
    }
    
    // Girilen bilgileri ekrana yazdır
    printf("\nDers Bilgileri:\n");
    printf("Ders Kodu: %s\n", course.courseCode);
    printf("Ders ismi: %s\n", course.courseName);
    printf("Ogrenci Bilgileri:\n");
    
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Ogrenci Numarasi: %d, Notu: %.2f\n", course.students[i].studentID, course.students[i].grade);
    }
    
    return 0;
}
