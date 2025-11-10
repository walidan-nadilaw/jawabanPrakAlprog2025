/*
inisialisasi array angka[n] dengan 0
scan array nomorOrang[n]
scan nomor pertama
index = nomor-1
jika index< size array && angka[index] == 0
    jumlahDiajak++
    angka[index]++
    nomor = nomorOrang[index]
else break

*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);

    int nomorOrang[n];
    for(int i=0; i<n; i++){
        scanf("%d", &nomorOrang[i]);
    }

    bool hasDiajak[n];
    for(int i=0; i<n; i++){
        hasDiajak[i] = false;
    }

    
    int jumlahDiajak=0, index=0, nomor;

    while (index < n)
    {
        if(hasDiajak[index] == true) break;
        hasDiajak[index] = true;
        jumlahDiajak++;
        index = nomorOrang[index] - 1;
    }
    
    printf("%d\n", jumlahDiajak);
} 