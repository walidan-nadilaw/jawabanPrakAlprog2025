#include <stdio.h>

int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    long int sumA = 0, sumB = 0;
    int num;

    for(int i=0; i<n; i++){
        scanf("%d", &num);
        if(num % a == 0) sumA += num;
        if(num % b == 0) sumB += num;
    }
    
    if(sumA > sumB) printf("%lld", sumA - sumB);
    else printf("%lld", sumB - sumA);
}