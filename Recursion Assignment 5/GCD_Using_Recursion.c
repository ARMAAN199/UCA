/* GCD of two numbers using recursion
 *
 *Author - Armaan Jain 1910990432
 *Input - Two integers a and b
 *Assignment: Assignment_5_Recusrion 
 */

#include <stdio.h>

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    /* Taking two integers as input and passing them to gcd function */
    int a, b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    printf("GCD of a,b is = %d", gcd(a,b));
    return 0;
}