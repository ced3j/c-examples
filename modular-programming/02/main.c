#include <stdio.h>
#include "person.h"

int main(){

    Person person1;
    updatePerson(&person1, "Derin", 51, 157);

    printPerson(&person1);

    return 0;
}