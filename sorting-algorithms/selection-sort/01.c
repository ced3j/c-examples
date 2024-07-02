// Selection sort nedir?

// 3 4 12 1 34 16   ---- Böyle bir dizinin üzerinde baştan sona dön ve en küçüğünü en başa yerleştir
// Dizi düzene girene kadar aynı işlemi tekrarla


#include <stdio.h>


void selectionSort(int arr[], int size){

    int minimumIndex;
    for(int i = 0; i < size; i++){
        minimumIndex = i; // Her döngü başında minimumIndex = i olacak
        for(int j = i+1; j < size; j++){ // Her seferinde j i+1'den başlayacak çünkü i'den başlarsa kendi kendiyle kıyaslarız
            if(arr[j] < arr[minimumIndex]){
                minimumIndex = j; 
                // bu satırda sürekli döndüğümüzde minimum sayının hangi indexte olduğunu buluruz
            }
        }
        int temp = arr[i];
        arr[i] = arr[minimumIndex];
        arr[minimumIndex] = temp;
    }
    
    for(int x = 0; x < size; x++){
        printf(" %d", arr[x]);
    } 
}


int main(){

    int arr[] = {536,74,1,12,77};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, size);


    return 0;
}