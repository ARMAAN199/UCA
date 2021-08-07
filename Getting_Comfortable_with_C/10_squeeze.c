/* Program squeeze function
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 String
 *Assignment: Assignment 1 - C Foundations
 */

#include<stdio.h>
#include<string.h>


/* Removes a char from the string and left shift rest of it */
void removechar(char* str1, int j, int length1)
{
    for(int i = j; i< length1-1; i++)
    {
        str1[i] = str1[i+1];
    }
    str1[length1-1] = '\0';
}

void squeeze (char* str1, char* str2) {

    int length1 = 0;
    while (str1[length1] != '\0')
    {
      length1++;
    }

    int length2 = 0;
    while (str2[length2] != '\0')
    {
      length2++;
    }

    /* Removes a char from the str1 whenever a char from str2 is found */

    for(int i=0; i<length2; i++)
    {
        for(int j=0; j<length1; )
        {
            if(str2[i]==str1[j])
            {
                removechar(str1, j, length1);
            }
            else
            {
                j++;
            }
        }
    }

}

int main() {

    char str1[100], str2[100];

    printf("String1 : ");
    scanf("%s", str1);

    printf("String2: ");
    scanf("%s", str2);

    squeeze(str1, str2);
    printf("%s\n", str1);

    return 0;
}