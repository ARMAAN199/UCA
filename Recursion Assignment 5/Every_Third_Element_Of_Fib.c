/* Every third element of Fibonacci sequence using recursion
 *
 *Author - Armaan Jain 1910990432
 *Input - An Integer N defining number of elements
 *Assignment: Assignment_5_Recusrion 
 */

#include <stdio.h>

void fib(int a, int b, int n)
{
    int c = ((b * 4) + a);
    if(!(c>n))
    {
        printf("%d ", c);
        fib(b,c,n);
    }    
}

int main()
{
    /* Taking two integers as input and passing them to gcd function */
    int n;
    printf("Upto what number the modulated sequence is to be printed?  = ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("2");
        return 0;
    }
    else if(n==2)
    {
        printf("2 8");
        return 0;
    }
    else
    {
        fib(2,8,n);
    }
    return 0;
}