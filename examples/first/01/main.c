// #include <stdio.h>


// int main(){

//     return 0;
// }












// Üs hesaplıyor

// #include <stdio.h>

// long myFunction(long param1, long param2);

// int main(){
//     long result = myFunction(2,3);
//     printf("%ld", result);
//     return 0;
// }

// long myFunction(long param1, long param2){
//     if(param2 == 1){
//         return param1;
//     }else{
//         return param1 * myFunction(param1, param2-1);
//     }
// }








// Recursive çıktı hesapla: 


// #include <stdio.h>

// int myFunction(int n);

// int main(){
//     myFunction(4);
//     return 0;
// }

// int myFunction(int n){
//     if(n > 0){
//         printf("%d ", n);
//         myFunction(n-2);
//     }
//     printf("%d", n+1);
// } // 4 2 1 3 5





#include <stdio.h>


int main(){

    int a = 1; int b = -3; int c = 8; int d = 3;
    int e = a +(b++) + c * b -d;
    if(e > b-c * (--d)){
        printf("Hello World %d!\n",e);
    }else{
        printf("Goodbye World %d!\n", e);
    }

    return 0;
}



