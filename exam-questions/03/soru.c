struct package{
    int q;
};

void set_value(struct package data, int value){
    data.q = value;
}

int main(void){
    struct package p;
    p.q = 10;
    set_value(p, 20);
    printf("Value = %d\n", p.q);
    return 0;
}

// Programın ekran çıktısı nedir?



// Cevap

// 10






/* 


struct package{
    int q;
};

void set_value(struct package *d_ptr, int value){
    d_ptr->q = value;
}

int main(void){
    struct package p;
    p.q = 10;
    set_value(&p, 20);
    printf("Value = %d\n", p.q);
    return 0;
}

// Programın ekran çıktısı nedir?


*/



/*

// Analiz



İlk kod parçasında, set_value fonksiyonuna yapı değişkeni 
kopyası geçirilir ve orijinal yapı üzerinde bir değişiklik yapılmaz. 
Bu nedenle p.q değeri 10 olarak kalır. İkinci kod parçasında ise, 
set_value fonksiyonuna yapı değişkeninin adresi geçirilir ve 
doğrudan orijinal yapı üzerinde değişiklik yapılır, bu nedenle p.q 
değeri 20 olur.



*/