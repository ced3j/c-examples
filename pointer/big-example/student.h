#define MAX_STUDENTS 50

struct Student{
    char name[50];
    int grades[5];
};


void addStudent(struct Student students[], int *numStudents);
void printStudents(struct Student students[], int numStudents);

