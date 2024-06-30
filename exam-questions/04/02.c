// String uzunluğu hesapla


#include <stdio.h>


int stringLength(const char *str){
    int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }

    return len;
}

int main(){
    char *name = "Hello my name is who";
    int result = stringLength(name);
    printf("The result is : %d", result);

    return 0;
}