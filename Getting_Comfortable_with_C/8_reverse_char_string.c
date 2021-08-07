/* Reverse a char string without any stl functions
 *
 *Author - Armaan Jain 1910990432
 *Input - A String
 *Sample Input - hello world
 *Sample Output - dlrow olleh
 *Assignment: Assignment 1 - C Foundations
 */

#include <stdio.h>
#include <string.h>

void reverse (char *s) {

   /* Counting string length */
   int count = 0;
   while (s[count] != '\0')
   {
      count++;
   }

    int left = 0, right = count - 1, temp;
    while (left < right)
    {
        temp = s[right];  
        s[right] = s[left];
        s[left] = temp;
        left++;
        right--;
    }  
}   

int main()
{

   char str[10000];
   scanf("%[^\n]s",str);

   reverse(str);

   printf("%s\n", str);

   return 0;
}