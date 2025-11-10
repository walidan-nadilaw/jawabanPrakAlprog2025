#include <stdio.h>

int main(){
    int jumlah_n, posisi_k;
    scanf("%d %d", &jumlah_n, &posisi_k);

    // ada beberapa kondisi dimana rata2nya bil posisi kelipatan k pasti 0
    // 1. ketika jumlah datanya 0
    // 2. ketika posisi dirata2in kelipatan 0
    // 3. ketika posisi dirata2in itu melebihi jumlah bilangan yang ada
    //      misal:  n = 4, k = 5
    //              lu punya 4 bilangan, rata2in kalau posisinya 5 atau kelipatannya
    //              ya berarti rata2nya 0 dong
    //      ternyata kasus 3 ini udah ngecover kasus 1 
    if (posisi_k == 0 || posisi_k > jumlah_n) {
        printf("%.2f", 0);
        return 0;
    }

    double sum = 0;         // sum bisa aja berupa int, tapi dibikin double biar lebih gampang saat pembagian
    int counter = 0;        // buat hitung banyak bilangan posisi kelipatan k
    for (int i = 1; i <= jumlah_n; i++) {   // ada n bilangan, jadiin n sebagai patokan jumlah looping
        int angka; scanf("%d", &angka);     // ambil angka satu persatu
        if (i % posisi_k == 0) {            // cek ini yang diambil itu posisinya kelipatan k gak, bisa manfaatin i
            sum += angka;
            counter++;
        }
    }

    double rata2;
    if (counter == 0) rata2 = 0;
    else rata2 = sum / counter;

    printf("%.2f\n", rata2);
    return 0;
}