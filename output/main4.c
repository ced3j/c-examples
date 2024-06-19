#include <stdio.h>

void printGrades(size_t len, size_t grade, int* students[len]);


int main(){
    
    int student1[3] = {25,60,80};
    int student2[3] = {71,53,86};
    int student3[3] = {61,34,99};

    int* students[3] = {student1, student2, student3};

    printGrades(3, 3, students);

    
    return 0;
}


void printGrades(size_t len, size_t grade, int* students[len]){
    int* ptr = NULL;
    for(int i = 0; i < len; i++){
        ptr = *(students + i);
        printf("Ogrenci%d'in notlari: ", i+1);
        for(int j = 0; j < len; j++){
            printf("%d ", *(ptr+j));
        }
        puts(" ");
    }
}