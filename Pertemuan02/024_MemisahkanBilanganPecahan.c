#include <stdio.h>

int main(){
    double n;           // pakai double bukan float biar lebih bisa nyimpen angka di belakang koma
    scanf("%lf", &n);

    int bulat = n;                      // nyimpen nilai float ke variable dengan tipe data int bakal buletin nilai itu ke bawah
    double desimal = n - bulat;         // misal 2.5 - 2 = 0.5
    printf("%d %.5lf", bulat, desimal);
}