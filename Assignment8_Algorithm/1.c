/* Print Fib series but only even elements
 *
 *Author - Armaan Jain 1910990432
 *Input - 1 Integer
 *Assignment: Assignment 8

 */

#include <stdio.h>
#include <stdlib.h>

//Considering the first few numbers of the sequence. It can be easily said that even numbers are at places
//that are multiples of 3.

void fib_but_even(int n, int a, int b, int sum)
{
    if(n <= 2)
    {
    return;
    }

    printf("%d ", sum);
    a = b;
    b = sum;

    fib_but_even(n-1, a, b, (4*b)+a);
}

int main()
{
    int n;
    printf("Number of even Fib numbers? \n");
    scanf("%d", &n);

    int a = 2, b = 8;

    if(n >= 1)
    {
        printf("2 ");
    }    
    if(n >= 2)
    {
        printf("8 ");
    }

    fib_but_even(n, a, b, 34);
    return 0;
}