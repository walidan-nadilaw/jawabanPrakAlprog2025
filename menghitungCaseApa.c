#include <stdio.h>

int main(){
    int arr[] = {10, 20, 1000, 5000, 10000};
    int n = sizeof(arr)/sizeof(arr[0]);

    //algoritma fa
    for (int i = 0; i < n; i++){
        double x = (double) arr[i];
        double fa = 2*x*x + 975*x + 90;
        double time = fa / 1e8; // bagi 10^8
        printf("fa(%d) time:\t%.8lf seconds\n", arr[i], time);
    }
    printf("\n");
    //algoritma fb
    for (int i = 0; i < n; i++){
        double x = (double) arr[i];
        double fb = x*x + 75*x + 90;
        double time = fb / 1e8; // bagi 10^8
        printf("fb(%d) time:\t%.8lf seconds\n", arr[i], time);
    }
}