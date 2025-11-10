/*
    nilai[i][j] = pfxsum[i][j] - pfxsum[i-1][j] - pfxsum[i][j-1] + pfxsum[i-1][j-1]
    nilai[i][0] = pfxsum[i][0] - pfxsum[i-1][0]
    nilai[0][j] = pfxsum[0][j] - pfxsum[0][j-1]
*/
#include <stdio.h>

int main(){
    int matrix[1000][1000];
    int m, n, nilai;
    int baris, column;
    int Bidx, Cidx;
    scanf("%d %d", &m, &n);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    while(1){
        scanf("%d", &baris);
        if(baris==-9) break;
        scanf("%d", &column);

        Bidx = baris-1;
        Cidx = column-1;

        if( Bidx == 0 && Cidx == 0) 
            nilai = matrix[Bidx][Cidx];

        else if( Bidx == 0 && Cidx > 0)
            nilai = matrix[0][Cidx] - matrix[0][Cidx-1];
        
        else if( Bidx > 0 && Cidx == 0)
            nilai = matrix[Bidx][0] - matrix[Bidx -1][0];
        
        else {
            nilai = matrix[Bidx][Cidx];
            nilai -= matrix[Bidx-1][Cidx];
            nilai -= matrix[Bidx][Cidx-1];
            nilai += matrix[Bidx-1][Cidx-1];
        }

        printf("%d ", nilai);
    }
}