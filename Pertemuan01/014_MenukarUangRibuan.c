#include <stdio.h>

int main() {
    int uang;
    scanf("%d", &uang);

    // catatan:
    // sifat pembagian antara 2 integer adalah pembulatan ke bawah
    // misal 5/2 = 2.5 --> 2

    int pecahan100rb = uang / 100;      // menghitung berapa uang 100rb yang ditukar dengan uang sekarang
    uang = uang - pecahan100rb * 100;   // setelah diketahui bisa ditukar sejumlah sekian 100rb, dihitung sisanya
    // perhitungan pecahan uang berikutnya berdasarkan sisa uang yang belum ditukar
    // sama saja dengan uang = uang % 100 atau uang %= 100
    // konsep greedy

    int pecahan50rb = uang / 50;
    uang = uang - pecahan50rb * 50;
    
    int pecahan10rb = uang / 10;
    uang = uang - pecahan10rb * 10;

    int pecahan5rb = uang / 5;
    uang = uang - pecahan5rb * 5;

    int pecahan2rb = uang / 2;
    uang = uang - pecahan2rb * 2;

    int pecahan1rb = uang / 1;

    // bisa terdapat beberapa %d, %f, %c, dan lainnya pada satu printf
    // antar variabel dipisahkan oleh tanda koma
    // %d pertama merujuk pada variabel pertama setelah tanda kutip
    // %d kedua merujuk pada variabel kedua setelah tanda kutip
    // %d ketiga merujuk pada variabel ketiga setelah tanda kutip
    printf("%d %d %d %d %d %d\n", pecahan100rb, pecahan50rb, pecahan10rb, pecahan5rb, pecahan2rb, pecahan1rb);
    return 0;
}