// Aşağıdaki kodun işlevi nedir?


#include <stdio.h>

void strRev(char *);

int main(){
	char array[] = "derin";
	strRev(array);
	return 0;
}

void strRev(char strArr[]){

	if(strArr[0] == '\0')
		return;
	strRev(&strArr[1]);
		printf("%c",strArr[0]);

}