#include <stdio.h>

int main()
{
//inisialisasi n dan array
    int n; scanf("%d", &n);
    int arr[n];

//scan elemen-elemen array
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

//inisialisasi counter
    int counter = 0;

//mencari subarray dengan jumlah 47
    //i adalah index awal subarray    
    for (int i = 0; i < n; i++){
        
        int sum = 0; //inisialisasi sum untuk subarray yang dimulai dari i
    
        //j adalah index akhir subarray
        for (int j = i; j < n; j++){

            sum += arr[j]; //menambahkan elemen ke-j ke dalam sum

            if (sum == 47) counter++; //jika sum sama dengan 47, counter bertambah 1
            if (sum > 47) break; //jika sum sudah lebih dari 47, tidak perlu dilanjutkan
        }
    }

    printf("%d\n", counter);
}