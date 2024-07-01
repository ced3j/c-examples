/*


Aşağıda verilen stringCompare() fonksiyonundan, s1 parametresinin işaret ettiği dizi ile s2 parametresinin işaret
ettiği dizinin maksimum n karakterini birbiriyle kıyaslaması ve kıyaslama sonucunda, s1 dizisinin s2 dizisinden
alfabetik olarak daha küçük olması, daha büyük olması ve eşdeğer olmaları durumlarında sırasıyla -1, 1 ve 0
değerlerini geriye döndürmesi beklenmektedir (Örnek: stringCompare("abcde", "abcdf", 4),
stringCompare("abcde", "abcf", 4) ve stringCompare("abcfe", "abcdf", 4) çağrıları
sırasıyla 0, -1 ve 1 değerlerini geriye döndürmelidir). İşaret edilen dizilerin en az n adet karaktere sahip olduğunu
varsayınız.
Fonksiyonun 3 adet mantıksal hata içerdiği için doğru çalışmadığını göz önünde bulundurarak, hatalı kod
bölümünü işaretleyerek düzeltilmiş halini yazınız


 */


int stringCompare( const char *s1, const char *s2, int n ){
    int counter;
    for ( counter = 0; counter < n && (*s1 == *s2); counter++, s1++, s2++ ){
        ;
    }

    s1--;
    s2++;

    if ( *s1 == *s2 )
        return 0;
    else if ( *s1 < *s2 )
        return -1;
    else
        return 1;
}