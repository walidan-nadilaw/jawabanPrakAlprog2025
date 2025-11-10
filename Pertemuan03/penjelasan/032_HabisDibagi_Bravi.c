#include <stdio.h>

int main(){
    int a, b, count = 0;

    scanf("%d", &a);            // ambil angka, bisa jadi nilai a bisa jadi nilai sentinel
    while (a != -1)             // selama yang diambil bukan nilai sentinel, berarti itu nilai a
    {                           
        scanf("%d", &b);            // ketika a bukan nilai sentinel berarti ada 2 angka, ambil angka kedua
        if (!(a == 0 && b == 0))    // kalau a dan b sama sama 0, berarti gak boleh karena mau gak mau hitung mod 0
        {                           // !(a == 0 && b == 0) -> (!(a == 0) || !(b == 0)) -> (a != 0 || b != 0)
            if (a == 0 || b == 0) count++;              // kita bisa bikin dia 0 % x yang hasilnya 0
            else if (a % b == 0 || b % a == 0) count++;
        }
        scanf("%d", &a);        // ambil angka lagi, bisa jadi nilai a bisa jadi ilai sentinel
    }
    
    printf("%d", count);
}