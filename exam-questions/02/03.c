// Fonksiyon parametrelerinde 'const'



/*

void func(const char *str){

    // *str = 'A'; // Geçersiz *str sabit

}



void func(char * const str){
    
    str = "New"; // Geçersiz, str sabit
    *str = 'A'; // Geçerli *str sabit değil
}



void func(const char *const str) {
    // str = "New"; // Geçersiz, çünkü str sabit
    // *str = 'A'; // Geçersiz, çünkü *str sabit
}




 */