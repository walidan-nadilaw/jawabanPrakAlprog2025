
/* pseudocode

scan jumlah bilangan
jika 0 -> akhiri
jika 1 -> 
    - scan smallest
    - print bilangan tersebut

jika >1 -> 
    - scan num
    - jika num < smallest -> smallest = num 
*/

#include <stdio.h>

int main(){
    int n; scanf("%d", &n);

    if ( n==0 ) 
        return 0;

    int smallest; scanf("%d", &smallest);
    if (n == 1) {
        printf("%d", smallest);
        return 0;
    }

    int num;
    while(--n){
        scanf("%d", &num);
        if (num < smallest) smallest = num;
    }

    printf("%d", smallest);
    return 0;
}