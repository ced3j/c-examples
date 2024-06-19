typedef struct{
    char name[50];
    int age;
    float height;
} Person;


void printPerson(const Person *p);
void updatePerson(Person *p, const char *name, int age, float height);
