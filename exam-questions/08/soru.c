// Bu programın çıktısı?


#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

char *func(char *,char,int);

int main(){


	char *array = func("Hello world",'o',4);
		printf("%s",array);
	return 0;
}

char *func(char *s, char c, int num){

	char *ptr = (char *)malloc(strlen(s)+2);
	int k;
	for(k = 0; k < num; k++){
		ptr[k] = s[k];
	}
	ptr[num] = c;
	for(k = num; k <= strlen(s); k++){
		ptr[k+1] = s[k];
	}
	return ptr;

}