#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* trimString(char* s){
    char* ptr;
    if(!s) return NULL;
    if(!*s) return s;
    for(ptr= s+strlen(s)-1; (ptr>=s) && isspace(*ptr); --ptr);
    *(ptr+1)='\0';
    return s;
}

int main(){
    int n; scanf("%d", &n);
    getchar();
    char* teks = (char*)malloc(n*2001*sizeof(char));

    for(int i=0; i<n; i++){
        fgets(teks+i*2001, 2001, stdin);
        trimString(teks+i*2001);
    }

    int idx=0;
    while(1){
        scanf("%d", &idx);
        if(idx == -9) break;
        idx-=1;
        printf("%s\n", teks+idx*2001);
    }
}