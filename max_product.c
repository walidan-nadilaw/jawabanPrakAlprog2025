/*
4
10 -1 5 4
*/

#include <stdio.h>

int main(){
    double max_mult = 0;
    int start = 0;
    int end = 0;


    double arr[] = {0.5, 0.2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        double local_mult = 1;
        for (int j = i; j >=0; j--){
            local_mult *= arr[j];

            if (local_mult > max_mult){
                max_mult = local_mult;
                start = j;
                end = i;
            }
        }
    }

    if ( (int) max_mult == max_mult){ 
        int int_mult = (int) max_mult;
        printf("Max product %d from index %d to %d\n", int_mult, start, end);
    }
    else printf("Max product %.2lf from index %d to %d\n", max_mult, start, end);
}