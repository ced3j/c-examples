/*


float val = 5.5;
void *voidPtr = &val;
int *intPtr = voidPtr;
printf("%d", *intPtr);


 */


/*

Bu kodda, float türündeki val değişkeni voidPtr'ye atanmış. 
Sonra voidPtr bir int göstericiye (intPtr) atanmış ve çözümleme 
yapılmış. float türündeki bir değeri int türünde çözümlemek hatalıdır.


float val = 5.5;
void *voidPtr = &val;
float *floatPtr = (float *)voidPtr;
printf("%f", *floatPtr);




 */