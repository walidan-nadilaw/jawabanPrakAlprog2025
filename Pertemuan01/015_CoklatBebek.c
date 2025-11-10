#include <stdio.h>

int main() {
    int coklat;

    scanf("%d", &coklat);

    int bebekTerakhir = 1;                  // nomor bebek dimulai dari 1
    while (coklat >= bebekTerakhir)         // coklat selalu diberikan selama masih cukup
    {
        coklat = coklat - bebekTerakhir;    // jumlah coklat berkurang setelah diberikan ke bebek ke n
        bebekTerakhir = bebekTerakhir + 1;  // bebek berikutnya lebih besar 1 nomor dari bebek sebelumnya
    }                                       // perulangan berhenti ketika coklat tidak cukup untuk diberikan ke bebek ke n
    
    printf("%d\n", bebekTerakhir);
    return 0;
}