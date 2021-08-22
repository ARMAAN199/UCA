/* BitAnd
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 integers
 *Assignment: Assignment2_Bits_Bytes
 */

/* Legal ops:  ~ |  
/* Max ops: 8
*/
#include <stdio.h>

int bitAnd (int x, int y) {
     return ~(~x|~y);
}

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    //Function call that runs custom bitand.
    printf("%d",bitand(a,b));
    
}