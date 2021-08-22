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


//When we have to find the nth bit. We shift the bits and make the nth bit the LSB.
//Similarly here. What I've done is I've shifted the bytes to make the nth byte the 
//LS byte (sort of) and then instead of doing and with 1 as we do to get the nth byte
//I did &  operation with 0xff with is the kind of the byte equivalent of 1. (Max val basically)

#include <stdio.h>

int getByte(int x, int n) {
  return (x >> (8*n)) & 0xff;
}

int main(){
    int x,n;
    scanf("%d", &x);
    scanf("%d", &n);
    printf("%d",getByte(x,n));  
}