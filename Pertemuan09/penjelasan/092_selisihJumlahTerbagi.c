#include <stdio.h>

int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

/*
    n bisa sampai 10^5
    Di bisa sampai 10^6
    sum terbesar bisa sampai 10^5 * 10^6 = 10^11 -> melebihi kapasitas int 
    -> harus pakai long int
*/
    //menyimpan habis bagi a dan b
    long int sumA = 0, sumB = 0;
    int num; //variable menyimpan input angka

    //looping sesuai n
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        if(num % a == 0) sumA += num;
        if(num % b == 0) sumB += num;
    }
    
    //print selisih
    if(sumA > sumB) printf("%lld", sumA - sumB);
    else printf("%lld", sumB - sumA);
}