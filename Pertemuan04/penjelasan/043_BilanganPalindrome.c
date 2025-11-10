#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    while(n--){
        int original; scanf("%d", &original);
        int sementara = original;   // kenapa dipisah? gak harus sebenernya, tapi bakal ngebantu lu saat debugging
        int reversed = 0;           // bilangan awal tapi urutannya dibalik
        
        // proses nyusun reversed:
        // 1. ambil angka paling belakang original, taruh di paling depan reversed
        // 2. ambil angka kedua dari belakang original, taruh di paling belakang reversed, alias kedua dari depan reversed
        // 3. ambil angka ketiga dari belakang original, taruh di paling belakang reversed, alias ketiga dari depan reversed
        // dst sampai semua angka keambil
        while(sementara > 0){
            int digit = sementara % 10;         // % 10 bakal ngembaliin angka satuan -> angka paling belakang original saat ini
            reversed = reversed * 10 + digit;   // selipin angka paling belakang original tadi di paling belakang reversed
            sementara /= 10;                    // buang angka paling belakang original, sekarang angka kedua dari belakang jadi di paling belakang
        }

        if(reversed == original) printf("1\n");
        else printf("0\n");
    }
}