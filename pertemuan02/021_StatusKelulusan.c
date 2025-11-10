#include <stdio.h>

int main(){
    int uts, uas;

    // Perhatikan bahwa ketika input berupa "(angka) (angka)" dipisah spasi
    // maka scanf juga menyesuaikan menjadi "%d %d"
    scanf("%d %d", &uts, &uas);

    float rata = (uts+uas)/2.0;
    // kenapa /2.0 bukan /2?
    // karena pembagian int/int akan menghasilkan int
    // sedangkan kita membutuhkan hasil float (agar lebih aman)
    // maka ditulis dengan int/float yang menghasilkan float

    if ( rata > 60 ){
        // gak perlu mengecek rata > 60 buat masing2 kondisi lulus dan lulus bersyarat
        // karena 22nya tuh harus sama2 memenuhi rata > 60 
        // sekali mendayung dua pulau terlampaui :3

        if ( uts > 40 && uas > 40){     
            printf("LULUS");
        }
        else
            printf("LULUS BERSYARAT");
    }
    else if (rata < 60) printf("TIDAK LULUS"); // perhatikan bahwa soal meminta rata rata < 60

    return 0;
}