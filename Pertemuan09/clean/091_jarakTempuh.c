#include <stdio.h>

int main(){

    while(1){
        int input;
        scanf("%d", &input);
        if(input == -1) break;

        int kecepatan, jam_skarang;
        int jam_sebelum=0, sumJarak=0;

        for(int i = 0; i < input; i++){
            scanf("%d %d", &kecepatan, &jam_skarang);
            sumJarak += kecepatan * (jam_skarang-jam_sebelum);
            jam_sebelum = jam_skarang;
        }
        printf("%d\n", sumJarak);
    }
}