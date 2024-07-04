// Araba Struct

#include <stdio.h>

struct Car {
    char brand[50];
    char model[50];
    int year;
    double price;
};

void printCar(struct Car car) {
    printf("Marka: %s\n", car.brand);
    printf("Model: %s\n", car.model);
    printf("Yıl: %d\n", car.year);
    printf("Fiyat: %.2f\n", car.price);
}

int main() {
    struct Car car1 = {"Toyota", "Corolla", 2020, 20000.0};
    struct Car car2 = {"Honda", "Civic", 2021, 22000.0};

    printf("Araba 1:\n");
    printCar(car1);

    printf("\nAraba 2:\n");
    printCar(car2);

    return 0;
}
