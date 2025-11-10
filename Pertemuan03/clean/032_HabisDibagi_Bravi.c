#include <stdio.h>

int main(){
    int a, b, count = 0;

    scanf("%d", &a);
    while (a != -1)
    {
        scanf("%d", &b);
        if (a != 0 || b != 0)
        {
            if (a == 0 || b == 0) count++;
            else if (a % b == 0 || b % a == 0) count++;
        }
        scanf("%d", &a);
    }
    
    printf("%d", count);
}