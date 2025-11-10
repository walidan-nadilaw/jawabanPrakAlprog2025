#include <stdio.h>

int main(){
    int n, inp, countSwap = 0;
    int arr[10000] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &inp);
        // printf("input %d\n", inp);   // buat ngecek apakah inputnya bener
        arr[i] = inp;
    }
    
    // buat ngecek apakah masukin ke arraynya bener
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // } printf("\n");


    int dp[n];
    
    for (int i=0; i<n; i++) dp[i]=1;
    
    for (int i=1; i<n; i++) {
        for (int j=0; j<i; j++) {
            if (arr[i]>arr[j] && dp[i]<dp[j]+1) dp[i]=dp[j]+1;
        }
    }
    
    // mencari nilai max dari dp
    int max = dp[0];
    
    for (int i=1; i<n; i++) {
        if (dp[i]>max) max = dp[i];
    }

    printf("%d", n - max);
}