#include <stdio.h>

int main() {
    // input yang diterima adalah bilangan buat dalam rentang 1 - 10 miliar
    // sehingga jenis tipe data yang memenuhi adalah unsigned long long int
    // (titik beratkan pada 10 miliar)
    // cek: https://www.geeksforgeeks.org/c/data-types-in-c/

    unsigned long long int n;   // tipe data unsigned long long int
    scanf("%llu", &n);          // sehingga pada fungsi scanf digunakan %llu
    printf("%llu\n", n);        // begitu pula untuk printf
    return 0;
}