/*
input
10
2 3 4 1 5 2 6 3 4 7

10
1 2 3 4 5 6 6 8 8 10
*/

#include <stdio.h>

int main() {
    // Deklarasi variabel N untuk jumlah titik pendakian dan jumlah titik sebabnyak n
    int n;
    scanf("%d", &n);
    int titik_km[n];

    // Membaca semua data ketinggian dari input.
    for (int i = 0; i < n; i++) {
        scanf("%d", &titik_km[i]);
    }

    // Inisialisasi variabel untuk melacak tanjakan terbaik yang ditemukan.
    // best_start_km diinisialisasi -1 sesuai permintaan soal jika tidak ada tanjakan.
    // max_height dan max_steepness diinisialisasi dengan nilai yang sangat kecil
    // agar tanjakan pertama yang ditemukan pasti akan menjadi yang "terbaik" sementara.
    int best_start_km = -1; 
    int max_height = -1;
    double max_steepness = -1.0;

    // Variabel iterator untuk menjelajahi rute.
    int i = 0;
    while (i < n - 1) {
        // Mendeteksi awal dari sebuah tanjakan (ketinggian di titik berikutnya lebih tinggi).
        if (titik_km[i+1] > titik_km[i]) {

            int start_km = i;
            int end_km = i + 1;

            while (end_km < n - 1 && titik_km[end_km+1] > titik_km[end_km]) {
                end_km++;
            }

            // Menghitung tinggi dan panjang horizontal dari tanjakan yang ditemukan.
            int current_height = titik_km[end_km] - titik_km[start_km];
            int current_length = end_km - start_km;
            
            // Menghitung kecuraman. Casting ke double diperlukan untuk mendapatkan hasil desimal.
            double current_steepness = (double)current_height / current_length;

            // Proses perbandingan untuk menentukan tanjakan terbaik.
            
            // Kriteria 1: Jika tanjakan saat ini lebih tinggi dari tanjakan terbaik sebelumnya.
            if (current_height > max_height) {
                // Maka, tanjakan ini menjadi tanjakan terbaik yang baru.
                max_height = current_height;
                max_steepness = current_steepness;
                best_start_km = start_km;
            } 
            // Kriteria 2: Jika tingginya sama dengan yang terbaik, cek kecuramannya.
            else if (current_height == max_height) {
                // Jika tanjakan saat ini lebih curam.
                if (current_steepness > max_steepness) {
                    // Maka, ini menjadi tanjakan terbaik yang baru.
                    max_steepness = current_steepness;
                    best_start_km = start_km;
                }
                // Jika tinggi dan kecuramannya sama, tidak ada yang dilakukan.
                // Ini secara otomatis memenuhi syarat "pilih tanjakan pertama"
                // karena kita tidak menimpa `best_start_km` dengan yang baru.
            }

            // Setelah tanjakan selesai dianalisis, kita lanjutkan pencarian dari
            // titik akhir tanjakan tersebut untuk menghindari perhitungan ulang.
            i = end_km;
        } else {
            // Jika bukan awal tanjakan, cukup maju satu kilometer.
            i++;
        }
    }

    // Mencetak kilometer awal dari tanjakan terbaik yang ditemukan.
    printf("%d\n", best_start_km);

    return 0;
}