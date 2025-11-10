/* pseudocode

define variables
    dalamCounter = 0
    luarCounter = 0
    r, a, b;

scan r
while(1)
    scan a
    jika a == -999
        - print (dalamCounter luarCounter)
        - return 0
    
    scan b
         if a*a + b*b < r*r : dalamCounter++
    else if a*a + b*b > r*r : luarCounter++
*/
#include <stdio.h>

int main(){
    int dalamCounter = 0;
    int luarCounter = 0;

    int r, a, b;

    scanf("%d", &r);
    while(1){
        
        scanf("%d", &a);
        if (a==-999) {
            printf("%d %d", dalamCounter, luarCounter);
            return 0;
        }

        scanf("%d", &b);

        int distance = a*a + b*b;
        if (distance < r*r) dalamCounter++;
        else if (distance > r*r) luarCounter++;
    }
}