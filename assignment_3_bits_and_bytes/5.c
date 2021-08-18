/* logicalShift
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 integers
 *Assignment: Assignment2_Bits_Bytes
 */

/* logicalShift - shift x to the right by n, using a logical shift
*  can assume that 0 <=n<=31
* examples: logicalShift(0x87654321, 4) = 0x8765432
*  Legal ops:  ~ & ^ | + << >>
*Max ops: 20
*/

int logicalShift(int x, int n) {
  return (x >> n) & (~(((1 << 31) >> n) << 1));
}

int main(){
    int x,n;
    scanf("%d", &x);
    scanf("%d", &n);
    printf("%d",logicalShift(x,n));  
}