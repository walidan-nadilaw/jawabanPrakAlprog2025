/* pseudocode

define variables
    a, b, counter=0

while(1)
    scan a
    jika a == -1 
        - print counter
        - return 0

    else 
        scan b
        if a==0 && b==0 : continue
        else if (a or b) == 0 && lainnya >0 : counter++
        else if (a>0 && b>0)
            if (b > a) swap
            if (a % b == 0) counter++
*/

#include <stdio.h>


int main(){
    int counter = 0;
    int a, b;
    
    while(1){
        scanf("%d", &a);
        if( a == -1) {
            printf("%d", counter);
            return 0;
        }

        scanf("%d", &b);

        if( a==0 && b==0) continue;
        else if (a==0 && b>0) counter++;
        else if (a>0 && b==0) counter++;
        else if (a>0 && b>0){
            
            if (b>a){
                int temp = a;
                a = b;
                b = temp;
            }

            if ( a%b == 0) counter++;
        }
    }

}