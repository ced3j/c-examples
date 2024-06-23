/*
----------  MALLOC ----------

Malloc, C programlama dilinde dinamik bellek tahsisi yapmak için kullanılan bir fonksiyondur. 
Yani, program çalışma zamanında ihtiyaç duyulan belleği (hafızayı) tahsis etmek için kullanılır. 


 */


#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    int *arr;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);


    // malloc ile bellek tahsisi
    arr = (int *)malloc(sizeof(int) * n);

    if(arr == NULL){
        printf("Bellek tahsisi basarisiz!");
        return 1;
    }

    printf("Dizinin elemanlarini girin: ");
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }


    printf("\nDizinin elemanlarini yazdiralim: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    // belleği serbest bırak
    free(arr);
}