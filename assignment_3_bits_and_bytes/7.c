/* bang
 *
 *Author - Armaan Jain 1910990432
 *Input - 1 integer
 *Assignment: Assignment2_Bits_Bytes
 */

/* bang - Compute !a without using !
*  Examples: bang(3)=0, bang(0)=1
*  Legal ops: ~ & ^ | + << >>
*  Max ops: 12
*/ 

int bang(int a) {
  return (((~a + 1) | a) >> 31) + 1;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d",bang(a));
    
}