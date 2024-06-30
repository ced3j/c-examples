/*


// Burada yapılan hata nedir ve nasıl düzeltilebilir?



char name[20] = "Hello World";
const char * const greeting;
greeting = name;
*(greeting + 5) = 'o';
printf("%s", name);
printf("%c", *(greeting + 5));


 */


/*

Hata: const char * const greeting kısmında
    greeting göstericisi sabit yani const dolayısıyla atandıktan sonra değiştirilemez
    Ancak bu göstericiya daha sonradan "name" atanmış, bu yanlıştır


Hata: greeting hem gösterici hem de değişken olarak sabit yani consttur
    *(greeting + 5) = '0' satırı greeting'in gösterdiği değeri değiştirmeye çalışır
        const char * const türünde bir gösterici değişmez



Çözümler:

    char name[20] = "Hello World";
    char *greeting;
    greeting = name;
    *(greeting + 5) = 'o';
    

    char name[20] = "Hello World";
    const char * greeting = name;
    // *(greeting + 5) bu satırı tamamen kaldırıyoruz



 */