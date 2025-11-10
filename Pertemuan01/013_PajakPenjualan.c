#include <stdio.h>

int main() {
    double HargaSetelahPajak;   // tipe data double agar lebih akurat, menyesuaikan format input
    double pajak = 0.15;
    
    scanf("%lf", &HargaSetelahPajak);       // fungsi scanf menggunakan %lf untuk menyatakan bahwa jenis tipe data berupa double
    
    double HargaSebelumPajak = HargaSetelahPajak * (100 / (100 + pajak * 100)); // agar menjadi 100/115
    
    printf("%.2lf\n", HargaSebelumPajak);   // terdapat .2 antara % dan lf agar format output hanya memiliki 2 angka di belakang koma
    return 0;
}