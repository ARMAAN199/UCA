/* convert hexadeciamal to integer
 *
 *Author - Armaan Jain 1910990432
 *Input - A Hex String
 *Assignment: Assignment 1 - C Foundations
 */

#include <stdio.h>
#include <string.h>


int htoi(char *s)
{
    int size = strlen(s), power = 1, sum = 0, initial = 0;
 
    /* To ignore the first two chars if string begins with 0x or 0X */
    if(s[0]=='0' && (s[1]=='x' || s[1]=='X'))
    {
        initial=2;
    }

    /* For every character beginning form the end. We change it into its decimal representation
       then multiply it with corresponding power of 16. And add it to sum*/    
    for (int i = size - 1; i >= initial; i--) 
    {
        if (s[i] >= '0' && s[i] <= '9')
            {
            sum += (s[i] - 48) * power; 
            power = power * 16;
            }
 
        else if (s[i] >= 'A' && s[i] <= 'F') 
        {
            sum += (s[i] - 55) * power;
            power = power * 16;
        }

    }
    return sum;
}

int main()
{
        char str [1000];
        scanf("%[^\n]s", str);

        int i=0;
        while(str[i]!='\0')
        {
            //uppercasing the string
            if(str[i] >= 'a' && str[i] <= 'f')
            {
                str[i] -= 32;
            }
            i++;
        }

        printf("%d",htoi(str));
    
}