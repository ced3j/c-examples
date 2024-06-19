#include <stdio.h>
#include <string.h>
#include "person.h"


void printPerson(const Person *p){
    printf("Name: %s\n", p -> name);
    printf("Age: %d\n", p->age);
    printf("Height: %.2f\n", p->height);
}


void updatePerson(Person *p, const char *name, int age, float height){
    strcpy(p -> name, name);
    p->age = age;
    p->height = height;
}

