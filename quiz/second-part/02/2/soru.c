#include <stdio.h>
#define SIZE 30

void stringReverse(char strArray[], int index);

int main(){
    int loop;
    char strArray[SIZE] = "Print this string backward.";
    
    for(loop = 0; loop < SIZE; loop++){
        printf("%c", strArray[loop]);
    }

    printf("\n");
    stringReverse(strArray, 0);
    printf("\n");

    return 0;
}

/* Function to reverse a string */
void stringReverse(char strArray[], int index){
    if (strArray[index] == '\0') {
        return;
    }
    stringReverse(strArray, index + 1);
    printf("%c", strArray[index]);
    // printf("%c", strArray[index]);: Rekürsif çağrılar tamamlandığında, dizinin karakterlerini ters sırada yazdırır.
    // yani burada rekürsive satırı stoper görevi görür diyebiliriz

}
