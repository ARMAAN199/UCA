/* C program to Check whether String is palindrome or not ignoring cases and spaces
 *
 *Author - Armaan Jain 1910990432
 *Input - A String
 *Sample Input - Never Odd or Even
 *Sample Output - true
 *Assignment: Assignment 1 - C Foundations
 */

#include <stdio.h>

int main()
{
  /* Scanning a String until newline is read */
  char input[1000],str[1000];
  scanf("%[^\n]s",input);

  int isPalindrome = 1, length = 0,i=0;
  
  while (input[i] != '\0')
  {
    //Removing all spaces and changing all characters to lowercase
    if(input[i] == ' ')
    {
      i++;
      continue;
    }
    if(input[i]<97)
    {
      input[i] += 32;
    }
    str[length] = input[i];
    i++;
    
    //Counting the length of the final string
    length++;
  }

  int right = length - 1, mid = length/2;
  for (int left = 0; left < mid; left++)
  {
    if (str[left] != str[right])
    {
      isPalindrome = 0;
      break;
    }
    right--;
  }

  if(isPalindrome == 0)
  {
    printf("false");
  }
  else
  {
    printf("true");
  }

  return 0;
}