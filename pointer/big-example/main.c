#include <stdio.h>
#include "student.h"

int main(){
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    char choice;

    do{
        printf("\n --- Ogrenci Not Sistemi ---\n");
        printf("1- Yeni Ogrenci Ekle \n");
        printf("2- Ogrenci Bilgilerini Goruntule\n");
        printf("3- Cikis\n");
        printf("Seciminiz: ");
        scanf("%c", &choice);

        switch(choice){
            case '1':
                addStudent(students, &numStudents);
                break;
            case '2':
                printStudents(students, numStudents);
                break;
            case '3':
                printf("Programdan cikiliyor...\n");
                break;
            default:
                printf("Gecersiz secim! Tekrar deneyin..\n");
        }
    } while(choice != '3');
    return 0;
}