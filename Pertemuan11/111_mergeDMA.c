#include <stdio.h>
#include <stdlib.h>

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

    int *dt3;
    dt3 = (int*)malloc((n1 + n2)*sizeof(int));

    int check1 = 0, check2 = 0, pos3 = 0;
    while (check1 < n1 && check2 < n2)
    {
        if (arr1[check1] <= arr2[check2])
        {
            dt3[pos3] = arr1[check1];
            check1++;
        } else
        {
            dt3[pos3] = arr2[check2];
            check2++;
        }
        pos3++;
    }

    while (check1 < n1)
    {
        dt3[pos3] = arr1[check1];
        check1++; pos3++;
    }

    while (check2 < n2)
    {
        dt3[pos3] = arr2[check2];
        check2++; pos3++;
    }

    for (int i = 0; i < pos3; i++)
    {
        printf("%d ", dt3[i]);
    }
}