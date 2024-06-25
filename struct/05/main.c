#include <stdio.h>

struct SAMPLE{
    int a;
    long b;
    double c;
};

int main(){
    struct SAMPLE s;
    struct SAMPLE *ps;

    ps = &s;


    (*ps).a = 10;
    (*ps).b = 200;
    (*ps).c = 242.1;

    printf("%d", (*ps).a);

    return 0;
}

/*

Neden Parantez Kullanıyoruz?
(*ps).a ifadesinde:

*ps işaretçi ps'nin gösterdiği struct'ı "dereference" (işaretçinin gösterdiği yere ulaşmak) eder.
. operatörü, struct'ın bir üyesine erişmek için kullanılır.
Eğer parantez kullanmazsanız ve *ps.a yazarsanız, bu ps işaretçisinin a üyesini 
"dereference" etmeye çalışır, bu da hatalı bir işlem olur çünkü ps işaretçi bir struct değildir, struct'ın kendisidir.

Yani, (*ps).a ifadesi doğru kullanımdır, çünkü önce işaretçi 
ps'nin gösterdiği struct'a ulaşır ve ardından bu struct'ın a üyesine erişir.





 */