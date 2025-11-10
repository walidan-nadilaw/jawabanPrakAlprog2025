#include <stdio.h>

int main(){
    int bilanganCounter[201] = {0};
    
    int n; scanf("%d", &n);
    while(n--){
        int bilangan; scanf("%d", &bilangan);
        bilanganCounter[bilangan+100]++;
    }

    for(int i=0; i<201; i++){
        if(bilanganCounter[i] > 0){
            printf("%d ada %d\n", i-100, bilanganCounter[i]);
        }
    }
}