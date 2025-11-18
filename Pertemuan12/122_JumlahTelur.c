#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int* matrx = (int*)malloc(m * n * sizeof(int));

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrx[i * n + j]);
        }
    }

    int jumlahInput;
    scanf("%d", &jumlahInput);

    int a1, b1, a2, b2, sumTelur;
    for (int i = 0; i < jumlahInput; i++){
        sumTelur = 0;
        scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
        
        for (int j=a1-1; j<a2; j++){
            for (int k=b1-1; k<b2; k++){
                sumTelur += matrx[j * n + k];
            }
        }
        
        printf("%d\n", sumTelur);
    }
    

}