/* conditional
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 integers
 *Assignment: Assignment2_Bits_Bytes
 */

/*
* conditional - same as x ? y : z
* example conditional (2, 4, 5) = 4
* ! ~ & ^ | + << >>
* Max ops: 16
*/
#include <stdio.h>

int conditional(int x, int p, int n) {
  return n ^ ((p ^ n) & ((!x) + ~0));
}

int main(){
    int x,p,n;
    scanf("%d", &x);
    scanf("%d", &p);
    scanf("%d", &n);
    printf("%d",conditional(x,p,n));  
}