/* 

    const char *ptr;
    char str[] = "Hello";
    ptr = str; // Geçerli, ptr sabit değil
    ptr++; // Geçerli, ptr sabit değil
    *ptr = 'J'; // Geçersiz, değer sabit




    char str1[] = "Hello";
    char str2[] = "World";
    char * const ptr = str1;
    ptr = str2; // Geçersiz, ptr sabit 
    ptr++; // Geçersiz, ptr sabit
    *ptr = 'J'; // Geçerli, çünkü *ptr sabit değil




    const char str[] = "Hello";
    const char *const ptr = str;
    ptr = str + 1; // Geçersiz, ptr sabit 
    ptr++; // Geçersiz, ptr sabit
    *ptr ='J'; // Geçersiz, *ptr de sabit


*/