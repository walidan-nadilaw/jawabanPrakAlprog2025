/* pseudocode

define variables
    dalamCounter = 0
    luarCounter = 0
    r, a, b;

scan r
while(1)
    scan a
    jika a == -999
        - print (dalamCounter luarCounter)
        - return 0
    
    scan b
         if a*a + b*b < r*r : dalamCounter++
    else if a*a + b*b > r*r : luarCounter++
*/
#include <stdio.h>

int main(){
    int dalamCounter = 0;
    int luarCounter = 0;

    int r, a, b;

    scanf("%d", &r);
    while(1){
        
        scanf("%d", &a);    // ambil angka, bisa jadi nilai a bisa jadi nilai sentinel
        if (a==-999) {      // kalau ternyata nilai sentinel
            printf("%d %d", dalamCounter, luarCounter); // cetak output
            return 0;                                   // keluar dari program
        }

        // ketika a bukan nilai sentinel berarti ada 2 angka (a dan b),
        scanf("%d", &b);    // ambil angka kedua
                            
        // hitung jarak titik T(a, b) dari pusat lingkaran (0, 0)
        int distance = a*a + b*b;               // gunakan rumus pythagoras c^2 = a^2 + b^2
        if (distance < r*r) dalamCounter++;     // kalau jaraknya kurang dari radius, berarti di dalem radius
        else if (distance > r*r) luarCounter++; // kalau jaraknya lebih dari radius, berarti di luar radius
    }
}