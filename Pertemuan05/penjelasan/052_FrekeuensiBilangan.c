#include <stdio.h>

int main(){
    // array untuk menyimpan jumlah bilangan 
    int bilanganCounter[201] = {0};
    // indeks ke i array isinya jumlah bilangan i
    // tapi dari bilangan buat jadi indeks ditambah 100
    // jumlah bilangan -100 disimpen di indeks 0
    // jumlah bilangan 0 disimpen di indeks 100
    // jumlah bilangan 100 disimpen di indeks 200
    // jadi ukuran array adalah 201
    
    int n; scanf("%d", &n);
    while(n--){
        int bilangan; scanf("%d", &bilangan);
        bilanganCounter[bilangan+100]++;
    }

    for(int i=0; i<201; i++){
        if(bilanganCounter[i] > 0){
            printf("%d ada %d\n", i-100, bilanganCounter[i]);
        }
    }
}