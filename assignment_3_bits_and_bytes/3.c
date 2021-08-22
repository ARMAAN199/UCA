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

//Saw this on gfg that n>>31 will give -1 if the number is negative. and obv itll be 1 for -n. 
//So we basically add those two up. 

int sign (int x) {
     return (x >> 31) - (-x >> 31);;
}

int main(){
    int a,b;
    scanf("%d", &a);
    printf("%d",sign(a));
    
}