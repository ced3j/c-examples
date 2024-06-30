/*

Bu fonksiyon bir stringi tersine çevirir

        void reverseString(char *s){
            int len = 0;
            char *start = s;
            char temp;

            while(s[len] != '\0'){
                len++;
            }


            for(int i = 0; i < len / 2; i++){
                temp = start[i];
                start[i] = start[len -1 -1];
                start[len -i -1] = temp;
            }

        }



 */