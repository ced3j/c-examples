// a) Insertion sort algoritmasında bulunan iki mantıksal hatayı düzelt: 

// KTÜ - Vizeler-  2016-2017 - 4. soru


#include <stdio.h>
#include <stdlib.h>

#define SIZE 15


void insertion_sort(int sorted_arr[], int sorting_size);


int main(){

    int array_to_be_sorted[SIZE] = {3,5,8,2,1,6,4,7,12,10,9,15,11,14,13};
    insertion_sort(array_to_be_sorted, SIZE);

    return 0;
}


void insertion_sort(int sorted_arr[], int sorting_size){
    int counter = 1;
    int i, temp;
    int pivot = sorted_arr[1];


    while(counter < sorting_size){
        for(i = counter-1; i >= 0; i--){
            if(pivot < sorted_arr[i]){
                temp = sorted_arr[i];
                sorted_arr[i] = pivot;
                sorted_arr[i+1] = temp;
            }
        }
        pivot = sorted_arr[counter++];
    }



}