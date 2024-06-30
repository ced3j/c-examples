/*

void *voidPtr;
int num = 10, *numPtr;
numPtr = &num;
voidPtr = numPtr;
printf("%d", *voidPtr);


// Burada yapılan hata nedir ve nasıl düzeltilebilir?

*/







/*

Hata: void türündeki bir pointer türü belirsizdir 
    derleyici hangi türde bir değer atayacağını bilmez


Hata: void türündeki pointer'ı çözümleyebilmek için belirli bir
    türe dönüştürmek gerekir int float double vs.

*/


/*

Hatanın düzeltilmiş hali:


void *voidPtr;
int num = 10, *numPtr;
numPtr = &num;
voidPtr = numPtr;
printf("%d", *(int *)voidPtr);  // Tür dönüşümü burada yapılır
*/