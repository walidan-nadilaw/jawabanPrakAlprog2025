/*
    nilai[i][j] = pfxsum[i][j] - pfxsum[i-1][j] - pfxsum[i][j-1] + pfxsum[i-1][j-1]
    nilai[i][0] = pfxsum[i][0] - pfxsum[i-1][0]
    nilai[0][j] = pfxsum[0][j] - pfxsum[0][j-1]
*/
#include <stdio.h>

int main(){
    int prefixSum[1000][1000];
    int matrixAwal[1000][1000];
    int m, n, nilai;
    int baris, kolom;
    int Bidx, Cidx;
    scanf("%d %d", &m, &n);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &prefixSum[i][j]);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if( i == 0 && j == 0) 
                matrixAwal[i][j] = prefixSum[i][j];

            else if( i == 0 && j > 0)
                matrixAwal[0][j] = prefixSum[0][j] - prefixSum[0][j-1];
            
            else if( i > 0 && j == 0)
                matrixAwal[i][0] = prefixSum[i][0] - prefixSum[i-1][0];
            
            else {
                matrixAwal[i][j] = prefixSum[i][j];
                matrixAwal[i][j] -= prefixSum[i-1][j];
                matrixAwal[i][j] -= prefixSum[i][j-1];
                matrixAwal[i][j] += prefixSum[i-1][j-1];
            }
        }
    }

    while(1){
        scanf("%d", &baris);
        if(baris==-9) break;
        scanf("%d", &kolom);

        printf("%d ", matrixAwal[baris-1][kolom-1]);
    }
}