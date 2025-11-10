#include <stdio.h>

int main(){
    int arr[10000]={0};
    int n, awal, akhir, jumlah;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    while(1){
        jumlah = 0;

        scanf("%d" , &awal);
        if(awal == -9) break;
        scanf("%d", &akhir);

        if(akhir <= n){
            for (int i = awal-1; i < akhir; i++){
                jumlah += arr[i];
            }
        }
        printf("%d\n", jumlah);
    }
}