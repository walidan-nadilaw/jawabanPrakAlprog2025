#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    while(n--){
        int original; scanf("%d", &original);
        int sementara = original;
        int reversed = 0;
        
        while(sementara > 0){
            int digit = sementara % 10;
            reversed = reversed * 10 + digit;
            sementara /= 10;
        }

        if(reversed == original) printf("1\n");
        else printf("0\n");
    }
}