// Aşağıda verilen fonksiyon hangi görevi icra etmektedir?

char *mysteryFunc(char *s1, const char *s2, unsigned n){
    unsigned c;
    char *ptr = s1;

    for(; *s1 != '\0'; s1++){
        ;
    }

    for(c = 0; c < n && (*s1 = *s2); s1++, s2++, c++){
        ;
    }

    *s1 = '\0';

    return ptr;
}





/*
Bu kod parçası s1'in sonuna gider ve s2'den s1'e n kadar karakter kopyalar





for(; *s1 != '\0'; s1++){
    ;
}
Bu döngü s1 stringinin sonuna gider. *s1 null karakter (\0) olana kadar s1 pointerı artırılır.




for(c = 0; c < n && (*s1 = *s2); s1++, s2++, c++){
    ;
}
Bu döngü, s2 stringinden s1 stringine n karakter kopyalar:
    
    c < n ve (*s1 = *s2) şartları sağlandığı sürece döngü çalışır.

    *s1 = *s2 ifadesi, s2'nin mevcut karakterini s1'e kopyalar ve s1, s2 pointerlarını artırır.



    c < n kısmı: c sayacı nden küçük olduğu sürece döngü devam eder.
    (*s1 = *s2) kısmı: s2'nin karakteri s1'e kopyalanır ve bu işlem sonucunda *s1 karakteri kontrol edilir. Eğer *s2 null karakter ('\0') ise bu ifade false olur ve döngü sona erer.
    Şimdi (*s1 = *s2) kısmını daha detaylı inceleyelim:

        (*s1 = *s2) İfadesi
        *s1 = *s2: Bu, s2'nin gösterdiği karakteri s1'in gösterdiği yere kopyalar. Bu bir atama işlemi olduğu için, bu ifadenin sonucu kopyalanan karakterin kendisi olur.
        C dilinde, bir karakter '\0' ise, bu karakterin değeri false olarak değerlendirilir. Diğer tüm karakterler true olarak değerlendirilir.


        Döngü c sayacı nden küçük olduğu sürece ve *s2 karakteri null karakter ('\0') olmadığı sürece devam eder.
        (*s1 = *s2) ifadesi, s2'den s1'e karakter kopyalarken aynı zamanda kopyalanan karakterin değeri ile kontrol edilir. Eğer kopyalanan karakter '\0' ise, döngü sona erer.


 */