#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    int smallest;               
    scanf("%d", &smallest);     

    if (n == 1) {               
        printf("%d", smallest); 
        return 0;               
    }

    int num;                    
    for(int i = 0; i < n; i++){                                 
        scanf("%d", &num);                      
        if (num < smallest) smallest = num;
    }

    printf("%d", smallest);    
    return 0;
}