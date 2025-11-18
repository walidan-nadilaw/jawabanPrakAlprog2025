#include <stdio.h>
#include <stdlib.h>

/*
arr untuk scan semua array
arr untuk simpan alamat kapten

scan semua array
cek dari yang paling akhir
print dari awal
*/

int main(){
    int n;
    int count=0;
    scanf("%d", &n);

    int* arr_yam = (int*)calloc(n, sizeof(int));
    int* arr_kapten = (int*)calloc(n, sizeof(int));
    int tinggiTerbesar=0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr_yam[i]);
    }

    for(int j = n-1; j>=0; j--){
        if(j==n-1 || arr_yam[j] >= tinggiTerbesar){
            tinggiTerbesar = arr_yam[j];
            arr_kapten[j] = 1;
            count++;
        }
    }

    printf("%d\n", count);
    for (int k=0; k<n; k++){
        if(arr_kapten[k] == 1){
            printf("%d ", k+1);
        }
    }
}