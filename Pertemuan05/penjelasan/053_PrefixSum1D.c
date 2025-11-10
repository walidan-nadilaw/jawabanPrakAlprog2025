#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int prefixSum[n];

    for(int i=0; i<n; i++){
        int bilangan; scanf("%d", &bilangan);
        prefixSum[i] = bilangan;
    }

    while(1){
        int input; scanf("%d", &input);
        if (input == -9) break;
        if (input == 1) printf("%d ", prefixSum[0]);
        else { // prefix sum ke n = prefix sum ke n-1 + Un --> Un = prefix sum ke n - prefix sum ke n-1
            printf("%d ", prefixSum[input-1]-prefixSum[input-2]);   //input-1 = n karena sifat index by 0 array
        }
    }
    return 0;
}