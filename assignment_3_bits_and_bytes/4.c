/* GetByte
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 integers
 *Assignment: Assignment2_Bits_Bytes
 */

/*
* getByte - extract byte n from word x
* Examples: getByte(0x12345678, 1)  = 0x56
*Legal ops: ! ~ & ^| + << >>
Max ops: 6
*/

int getByte(int x, int n) {
  return (x >> (n << 3)) & 0xff;
}

int main(){
    int x,n;
    scanf("%d", &x);
    scanf("%d", &n);
    printf("%d",getByte(x,n));  
}