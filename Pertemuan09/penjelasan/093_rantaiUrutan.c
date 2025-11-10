/*
ide / pseudocode:
- bikin array sudahDiajak dengan ukuran n untuk menandai orang yang sudah diajak
- inisialisasi sudahDiajak[0] = 1 (orang pertama sudah diajak)
- inisialisasi sudahDiajak[1..n-1] = 0 (orang lainnya belum diajak)
- scan array angka[n] (menyimpan nomor orang yang akan diajak tiap orang)
- scan nomor pertama (nomor orang pertama yang diajak)
- index = nomor-1 (index array dimulai dari 0)
- while index < n dan sudahDiajak[index] == 0 (selama index valid dan orang belum diajak)
    - jumlahDiajak++
    - sudahDiajak[index]++ (menandai orang sudah diajak)
    - nomor = angka[index] (dapatkan nomor orang berikutnya yang akan diajak)
    - index = nomor-1
- else break (jika index tidak valid atau orang sudah diajak, keluar dari loop)
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int sudahDiajak[n]; //array untuk menandai orang yang sudah diajak
    int angka[n]; //array untuk menyimpan nomor orang yang akan diajak tiap orang

    //inisialisasi array sudahDiajak
    sudahDiajak[0]=1; 
    for(int i=1; i<n; i++){
        sudahDiajak[i] = 0;
    }

    //scan array angka
    for(int i=0; i<n; i++){
        scanf("%d", &angka[i]);
    }

    int jumlahDiajak=1, index=0, nomor;

    //proses ajak orang
    for(int i=0; i<n; i++){
        nomor = angka[index];
        index = nomor - 1;

        //cek apakah index valid dan orang belum diajak
        if(index < n && sudahDiajak[index] == 0){
            jumlahDiajak++;
            sudahDiajak[index]++;
        } else break; 
    }
    printf("%d\n", jumlahDiajak);
} 