/*
Aşağıdaki koddda yapılan hatayı belirle ve düzelt


char *charPtr;
int num = 65;
void *voidPtr = &num;
charPtr = voidPtr;
printf("%c", *charPtr);


 */


/*

Bu kodda int türündeki num değişkeni voidPtr'ye atanmış. 
Sonra voidPtr bir char göstericiye (charPtr) atanmış ve 
çözümleme yapılmış. Ancak, bir int değeri bir char göstericiye 
atanamaz ve doğru bir şekilde çözümleme yapılamaz.


char *charPtr;
int num = 65;
void *voidPtr = &num;
charPtr = (char *)&num;
printf("%c", *charPtr);

*/