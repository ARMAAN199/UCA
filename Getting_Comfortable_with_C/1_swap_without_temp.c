/* Swaps Two numbers without using a 3rd temporary variable
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 Integers
 *Assignment: Assignment 1 - C Foundations

 */

#include <stdio.h>

int main(){
    int a , b;
    /* Scans two integers */
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d", a,b);    

    return 0;
    
}