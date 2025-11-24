#include <stdio.h>
#include <ctype.h>

int main(){
    char previousChar = ' ';
    char ch;

    while((ch=getchar()) != EOF){
        if(isspace(previousChar)){
            ch = toupper(ch);
        }
        printf("%c", ch);
        previousChar = ch;  
    }
}