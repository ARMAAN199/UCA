/* BitXor
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 integers
 *Assignment: Assignment2_Bits_Bytes
 */

/* Example bitXor(4, 5) = 1
/* Legal ops:  ~ &  
/* Max ops: 14
*/

int bitXor (int x, int y) {
     return ~(~x & ~y) & ~(x & y);
}

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    //Function call that runs custom bitXor.
    printf("%d",bitXor(a,b));
    
}