/*

Soru1) Verilen-dizi indis notasyonu ile yazılmış fonksiyonun eş değer fonksiyonunu işaretçi notasyonu ile yazınız

int stringCompare(const char *s1, const char *s2){
    int sub;
    for(sub = 0; s1[sub] == s2[sub]; sub++){
        sub--;
    }

    if(s1[sub] == '\0' && s2[sub] == '\0'){
        return 0;
    }else if(s1[sub] < s2[sub]){
        return -1;
    }else{
        return 1;
    }
}

 */


/*


Bu soruda, bize bir stringCompare fonksiyonu verilmiş. Bu fonksiyon, iki dizeyi karşılaştırarak, onları eşit, birinin diğerinden küçük ya da büyük olup olmadığını belirliyor. Fonksiyon, dizilerin indis notasyonu kullanılarak yazılmış ve bizden bunu işaretçi notasyonu kullanarak yeniden yazmamız isteniyor.

Soru Açıklaması
Fonksiyon stringCompare, iki dize (s1 ve s2) alır ve aşağıdaki adımları takip eder:

sub adında bir değişken tanımlar ve bu değişkeni sıfırdan başlatır.
s1 ve s2 dizilerinin karakterlerini karşılaştırır. Eğer karakterler eşitse, sub değişkenini artırır ve döngüye devam eder. Eğer eşit değilse döngüden çıkar.
Döngüden çıktıktan sonra, s1 ve s2 dizilerinin aynı konumundaki karakterlere bakar:
Eğer her iki dize de \0 karakterine (null karakter) sahipse, dizeler eşittir ve 0 döner.
Eğer s1'in karakteri, s2'den küçükse, -1 döner.
Eğer s1'in karakteri, s2'den büyükse, 1 döner.
Yapmamız Gerekenler
Bu fonksiyonu işaretçi notasyonu kullanarak yeniden yazmamız isteniyor. İşaretçi notasyonu, dize karakterlerine doğrudan işaretçilerle erişmemizi sağlar.

 */


// Çözüm: 

int stringCompare(const char *s1, const char *s2){
    while(*s1 && (*s1 == *s2)){  
        // *s1 NULL olmadığı sürece ( ve && ) *s1 == *s2'ye eşit olduğu sürece
        s1++;
        s2++;
    }
    if(*s1 == '\0' && *s2 == '\0'){  
        // Bu satır, iki dize karşılaştırmasının ardından, dizelerin her ikisinin de sonuna ulaşılıp ulaşılmadığını kontrol eder
        return 0;
    }else if(*s1 < *s2){
        // *s1 < *s2: s1 işaretçisinin gösterdiği karakterin s2 işaretçisinin gösterdiği karakterden daha küçük olup olmadığını kontrol eder.
        // C dilinde karakterler, ASCII değerlerine göre karşılaştırılır. Örneğin, 'a' karakteri, 'b' karakterinden daha küçüktür çünkü ASCII değerleri daha düşüktür.
        return -1;
    }else{
        return 1;
    }
}

/*


Çözüm Açıklaması
while(*s1 && (*s1 == *s2)) döngüsü, her iki dizeyi de işaretçiler aracılığıyla kontrol eder:

*s1 ve *s2 ifadeleri, s1 ve s2 işaretçilerinin gösterdiği karakterleri ifade eder.
*s1 == *s2 olduğu sürece döngü devam eder.
s1++ ve s2++, işaretçileri bir sonraki karaktere ilerletir.
Döngü bittiğinde, *s1 ve *s2 karakterlerine bakarız:

Eğer her iki karakter de \0 ise, dizeler eşittir ve 0 döneriz.
Eğer *s1 karakteri *s2 karakterinden küçükse, -1 döneriz.
Eğer *s1 karakteri *s2 karakterinden büyükse, 1 döneriz.
Bu, verilen dizinin indis notasyonu ile yazılmış fonksiyonunun işaretçi notasyonu ile eşdeğer bir şekilde yazılmasıdır.




 */


