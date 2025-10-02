#include <stdio.h>

int main(){
    
    //inisialisasi n dan array
    int n; scanf("%d", &n);
    int arr[n];

    //scan elemen-elemen array
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    //inisialisasi array LIS
    int LIS[n];
    for (int i = 0; i < n; i++) 
        LIS[i] = 1;

    //mencari nilai LIS
    for (int i = 1; i < n; i++){ //mulai dari indeks 1 karena LIS yang berakhir di indeks 0 pasti 1
        for (int j = 0; j < i; j++){ //cek semua indeks sebelum i

            //jika di array arr : angka sekarang lebih besar daripada angka pada posisi j
            //dan
            //jika di array LIS : LIS sekarang lebih kecil dari (LIS pada posisi j) + 1
            if (arr[i] > arr[j] && LIS[i] < LIS[j] + 1){ 
                LIS[i] = LIS[j] + 1;
            }
        }
    }

    //mencari nilai maksimum dari LIS
    int max = LIS[0];
    for (int i = 1; i < n; i++){    
        if (LIS[i] > max){
            max = LIS[i];
        }
    }

    //print jumlah elemen yang perlu dipindah
    printf("%d\n", n - max);
}