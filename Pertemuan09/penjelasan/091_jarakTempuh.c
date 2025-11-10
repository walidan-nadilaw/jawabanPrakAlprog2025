#include <stdio.h>

int main(){

    //while loop sampai ketemu -1
    while(1){
        int input;//variable menyimpan input jumlah segment perjalanan
        scanf("%d", &input);
        if(input == -1) break; //break jika input -1

        int kecepatan, jam_skarang; //variable menyimpan input kecepatan dan jam
        int jam_sebelum=0; //agar bisa selisih jam
        int sumJarak=0; //menyimpan jarak tiap segment

        //looping sesuai jumlah segment perjalanan
        for(int i = 0; i < input; i++){
            scanf("%d %d", &kecepatan, &jam_skarang);
            sumJarak += kecepatan * (jam_skarang-jam_sebelum);
            jam_sebelum = jam_skarang;
        }
        printf("%d\n", sumJarak);
    }
}