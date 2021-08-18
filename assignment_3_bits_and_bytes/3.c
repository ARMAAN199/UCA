/* Sign
 *
 *Author - Armaan Jain 1910990432
 *Input - 1 integer
 *Assignment: Assignment2_Bits_Bytes
 */

/*
* sign - return 1 if positive, 0 if zero, and -1 if negative
* Examples: sign(130) = 1, sign(-23) = -1
* Legal ops: ! ~ & ^ | + << >>
* Max ops : 10
*/

int sign (int x) {
     return ((x >> 31)|(!!x));
}

int main(){
    int a,b;
    scanf("%d", &a);
    printf("%d",sign(a));
    
}