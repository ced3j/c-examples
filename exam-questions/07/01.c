/*


Bu fonksiyonun amacı nedir?

        void endOfString(char *s){
            
            while(*s != '\0'){
                s++;
            }
        }



Bu fonksiyon s2'yi s1'e kopyalar.

        void copyString(char *s1, const char *s2){
            while((*s1++ = *s2++) != '\0'){
                ;
            }
        }




Bu fonksiyon s1'in sonuna s2'yi ekler.

        void appendString(char *s1, const char *s2) {
            while(*s1 != '\0') {
                s1++;
            }
            while((*s1++ = *s2++) != '\0') {
                ;
            }
        }




Bu fonksiyon stringdeki belirli bir karakteri sayar.

        int countChar(const char *s, char c) {
            int count = 0;
            while(*s != '\0') {
                if(*s == c) {
                    count++;
                }
                s++;
            }
            return count;
        }




 */