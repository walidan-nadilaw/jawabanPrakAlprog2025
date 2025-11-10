
/* pseudocode

scan jumlah bilangan
jika 1 -> 
    - scan smallest
    - print bilangan tersebut

jika >1 -> 
    - scan num
    - jika num < smallest -> smallest = num 
*/

#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    int smallest;               
    scanf("%d", &smallest);     // angka pertama yang diambil dianggap yang paling kecil (sementara)

    if (n == 1) {               // ketika cuma ada 1 angka
        printf("%d", smallest); // yaudah dia itu lah angka terkecil
        return 0;               // keluar dari int main (program selesai) jadi baris2 di bawahnya gak jalan
    }

    int num;                    // nyiapin wadah buat nyimpen angka baru
    while(--n){                 // while(condition). nah condition ini kalau dimasukin angka selain 0 bakal true
                                // jadi selama jalan ketika n-1, n-2, n-3, ... 1. jalan sebanyak n-1 kali
                                // jangan lupa ini bentuknya predecrement, dikurang dulu baru dipakai
        scanf("%d", &num);                      // ambil angka baru
        if (num < smallest) smallest = num;     // simpen yang lebih kecil
    }

    printf("%d", smallest);     // cetak setelah semua angka dibandingin
    return 0;
}