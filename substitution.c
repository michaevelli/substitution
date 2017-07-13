//name: michael
//date: 20170403
//caesar cipher

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    char c = '0';

    if(argc != 2){
        printf("not enough arguments");
        return 1;
    }

    while(c != EOF){
        c = getchar();
        if(c == EOF){break;}

        if(c >= 'A' && c<= 'Z'){

            c += (-'A');

            putchar(argv[1][(int)c]-'a'+'A');
        } else if(c >= 'a' && c <= 'z'){
            c -= 'a';

            putchar(argv[1][(int)c]);
        } else {
            putchar(c);
        }
    }

    return 0;
}
