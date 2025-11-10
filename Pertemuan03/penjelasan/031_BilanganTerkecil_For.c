#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    int smallest;               
    scanf("%d", &smallest);     // angka pertama yang diambil dianggap yang paling kecil (sementara)

    if (n == 1) {               // ketika cuma ada 1 angka
        printf("%d", smallest); // yaudah dia itu lah angka terkecil
        return 0;               // keluar dari int main (program selesai) jadi baris2 di bawahnya gak jalan
    }

    int num;                    
    for(int i = 0; i < n; i++){                 // jalan ketika 0, 1, 2, ..., n-1. sebanyak n kali                 
        scanf("%d", &num);                      // ambil angka baru
        if (num < smallest) smallest = num;     // simpen yang lebih kecil
    }

    printf("%d", smallest);     // cetak setelah semua angka dibandingin
    return 0;
}