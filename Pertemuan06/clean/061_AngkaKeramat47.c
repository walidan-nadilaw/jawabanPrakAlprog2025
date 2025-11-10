#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    int counter = 0;

    for (int i = 0; i < n; i++){
        int sum = 0;

        for (int j = i; j < n; j++){
            sum += arr[j];
            if (sum == 47) counter++;
            if (sum > 47) break;
        }
    }

    printf("%d\n", counter);
}