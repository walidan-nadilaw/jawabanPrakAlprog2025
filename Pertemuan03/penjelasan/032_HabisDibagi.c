/* pseudocode

define variables
    a, b, counter=0

while(1)
    scan a
    jika a == -1 
        - print counter
        - return 0

    else 
        scan b
        if a==0 && b==0 : continue
        else if (a or b) == 0 && lainnya >0 : counter++
        else if (a>0 && b>0)
            if (b > a) swap
            if (a % b == 0) counter++
*/

#include <stdio.h>


int main(){
    int counter = 0;
    int a, b;
    
    while(1){
        scanf("%d", &a);            // ambil angka, bisa jadi nilai a bisa jadi nilai sentinel 

        if( a == -1) {              // kalau ternyata yang diambil nilai sentinel
            printf("%d", counter);  // cetak banyak pasang angka yang bisa habis dibagi satu sama lain
            return 0;               // keluar dari int main (program selesai)
        }

        scanf("%d", &b);            // ketika a bukan nilai sentinel berarti ada 2 angka, ambil angka kedua

        if( a==0 && b==0) continue; // ketika a dan b sama sama 0, yaudah gak usah dicek lagi, lanjut pasangan berikutnya
        else if (a==0 && b>0) counter++;    // bisa dirangkai jadi a % b = 0 % b, a > 0 = 0
        else if (a>0 && b==0) counter++;    // bisa dirangkai jadi b % a = 0 % a, b > 0 = 0
        else if (a>0 && b>0){               // kalau gak ada yang 0
                                            
            // kita pengen pakai a % b aja. jadi a harus lebih gede dari b
            if (b>a){           // kalau b ternyata lebih gede dari a, tuker aja a sama b
                int temp = a;
                a = b;
                b = temp;
            }

            if ( a%b == 0) counter++;
        }
    }

}