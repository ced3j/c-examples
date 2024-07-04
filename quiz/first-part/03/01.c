// Dikdörtgen alan ve çevre hesaplama

#include <stdio.h>

struct Rectangle {
    double length;
    double width;
};

double area(struct Rectangle rect) {
    return rect.length * rect.width;
}

double perimeter(struct Rectangle rect) {
    return 2 * (rect.length + rect.width);
}

int main() {
    struct Rectangle r1 = {5.0, 3.0};
    struct Rectangle r2 = {6.5, 4.0};

    printf("Dikdortgen 1:\n");
    printf("Alan: %.2f\n", area(r1));
    printf("Cevre: %.2f\n", perimeter(r1));

    printf("Dikdortgen 2:\n");
    printf("Alan: %.2f\n", area(r2));
    printf("Cevre: %.2f\n", perimeter(r2));

    return 0;
}
