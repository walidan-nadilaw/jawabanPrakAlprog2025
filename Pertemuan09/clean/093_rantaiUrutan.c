/*
inisialisasi array sudahDiajak[n] dengan 0
scan array angka[n]
scan nomor pertama
index = nomor-1
jika index< size array && sudahDiajak[index] == 0
    jumlahDiajak++
    sudahDiajak[index]++
    nomor = angka[index]
else break

*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int sudahDiajak[n];
    int angka[n];

    sudahDiajak[0]=1;
    for(int i=1; i<n; i++){
        sudahDiajak[i] = 0;
    }

    for(int i=0; i<n; i++){
        scanf("%d", &angka[i]);
    }

    int jumlahDiajak=1, index=0, nomor;

    for(int i=0; i<n; i++){
        nomor = angka[index];
        index = nomor - 1;
        if(index < n && sudahDiajak[index] == 0){
            jumlahDiajak++;
            sudahDiajak[index]++;
        } else break; 
    }
    printf("%d\n", jumlahDiajak);
} 