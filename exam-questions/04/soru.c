// Verilen dizi-indis notasyonu ile yazılmış fonksiyonun
// eş değer fonksiyonunu işaretçi notasyonu ile yazınız



int stringCompare1(const char *s1, const char *s2){
    int sub;

    for(sub = 0; s1[sub] == s2[sub]; sub++)
        ;

    sub--;

    if(s1[sub] == '\0' && s2[sub] == '\0'){
        return 0;
    }
    else if(s1[sub] < s2[sub]){
        return -1;
    }
    else{
        return 1;
    }

    
}




// Çözüm:

int stringCompare2(const char *s1, const char *s2){
    const char *ptr1 = s1;
    const char *ptr2 = s2;

    while(*ptr1 == *ptr2){
        if(*ptr1 == '\0'){
            return 0;
        }
        ptr1++;
        ptr2++;
    }


    if(*ptr1 < *ptr2){
        return -1;
    }
    else{
        return 1;
    }
}

/*

while (*ptr1 == *ptr2) { ... }: ptr1 ve ptr2 işaretçileri
aracılığıyla dizilerin elemanlarını karşılaştırırız. 
Elemanlar eşit olduğu sürece döngü devam eder.


if (*ptr1 == '\0') return 0;: Döngü bittiğinde, ptr1 dizisi 
(s1) sonuna gelmiş demektir ve eğer ptr2 dizisi (s2) de sona gelmişse, 
diziler birbirine eşittir ve 0 döndürülür.



if (*ptr1 < *ptr2) return -1; else return 1;: Eğer döngü sona 
erdiğinde ptr1 işaretçisi, ptr2 işaretçisinden küçük bir karaktere 
işaret ediyorsa, s1 dizisi s2 dizisinden alfabetik olarak 
önce gelir ve -1 döndürülür. Aksi takdirde, 1 döndürülür.


 */