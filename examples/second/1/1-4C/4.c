// Const (Sabit) işaretçiler
// Sabit işaretçiler ve işaret ettikleri değerin değiştirilmemesi

#include <stdio.h>

int main(){

    const int num = 10;
    // num = 20; // HATA, const değişmez
    printf("value of num %d\n", num);

    return 0;
}