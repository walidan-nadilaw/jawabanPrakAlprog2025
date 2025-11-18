// di soal gak disebutin secara eksplisit bahwa a < b

#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //switch kalau ada input misalnya 10 3 * (ga diminta soal, tapi nice to have)
    if (a > b){             // ketika a > b, berarti garis bilangannya: -∞ < b < a < ∞
        // kita tuker a sama b biar -∞ < a < b ∞. jadi gak perlu benerin program
        int t = a;          // bikin tempat penyimpanan sementara biar nilai a yang awal gak ke apus
        a = b;              // sekarang variable a megang nilai b
        b = t;              // lalu b megang nilai a yang lama
    }

    if (c==a || c==b){      // dipastiin dulu c == a atau c == b
        printf("tepi"); 
    }                       // kalau c == a atau c == b salah, berarti c != a, c != b, dan a != b
    else if (c < a){        // kalau a < b dan c < a berarti c < a < b
        printf("kiri");     // artinya c di paling kiri
    }                       // kalau c < a salah, pasti c > a
    else if (c > b){        // kalau a < b dan c > b, berarti a < b < c
        printf("kanan");    // artinya c di paling kanan
    }                       // kalau c > b salah, berarti ya sisanya kemungkinannya a < c < b
    else printf("tengah");  // inget ya kita udah mastiin c != a dan c != b

    return 0;
}