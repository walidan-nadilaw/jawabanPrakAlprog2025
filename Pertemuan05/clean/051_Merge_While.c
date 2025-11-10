#include <stdio.h>

int main(){
    int arr1[2000]={0}, n1 = 0, arr2[2000]={0}, n2 = 0, inp;

    while (1)
    {
        scanf("%d", &inp);
        if (inp == -9) break;
        arr1[n1] = inp;
        n1++;
    }
    
    while (1)
    {
        scanf("%d", &inp);
        if (inp == -9) break;
        arr2[n2] = inp;
        n2++;
    }

    // for (size_t i = 0; i < n1; i++) printf("%d ", arr1[i]); printf("\nn1 = %d\n", n1);
    // for (size_t i = 0; i < n2; i++) printf("%d ", arr2[i]); printf("\nn2 = %d\n", n2);

    int check1 = 0, check2 = 0;
    
    while (check1 < n1 && check2 < n2)
    {
        if (arr1[check1] <= arr2[check2])
        {
            printf("%d", arr1[check1]);
            check1++;
        } else
        {
            printf("%d", arr2[check2]);
            check2++;
        }
        printf(" ");
    }

    while (check1 < n1)
    {
        printf("%d ", arr1[check1]);
        check1++;
    }

    while (check2 < n2)
    {
        printf("%d ", arr2[check2]);
        check2++;
    }
}