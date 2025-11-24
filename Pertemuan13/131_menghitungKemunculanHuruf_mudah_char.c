#include <stdio.h>
#include <ctype.h>

int main() {

    int letterCount[26] = {0};
    char ch;
    while ((ch=getchar())!=EOF){
        ch = tolower(ch);
        letterCount[ch - 'a']++;
    }

    for(int i=0; i<26; i++){
        if(letterCount[i] > 0){
            printf("%c %d\n", 'a' + i, letterCount[i]);
        }
    }
}
