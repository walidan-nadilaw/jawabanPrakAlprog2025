#include <stdio.h>
#include <math.h>
#include <stdbool.h> // Menggunakan bool untuk 'found' lebih bersih

int main()
{
    int T;
    bool found;
    long long n, a, b, sum;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%lld", &n);
        found = false;

        // Inisialisasi dua pointer
        a = 0;
        // Kita HANYA panggil sqrt() SATU KALI, di luar loop.
        // round() digunakan untuk pembulatan yang lebih akurat
        b = (long long)round(sqrt((double)n)); 

        // Loop selama pointer tidak bersilangan
        while (a <= b)
        {
            // Tidak ada sqrt() di dalam loop!
            sum = a * a + b * b;

            if (sum == n)
            {
                found = true;
                break; // Ditemukan!
            }
            else if (sum < n)
            {
                // Jumlah terlalu kecil, naikkan a
                a++;
            }
            else // sum > n
            {
                // Jumlah terlalu besar, turunkan b
                b--;
            }
        }

        if (found)
            printf("Y");
        else
            printf("N");
    }
    
    // Sesuai sample output, newline dicetak hanya di akhir
    printf("\n"); 
    
    return 0;
}