/* Program given first appearance of any char from str2 in str1 using a function
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 Strings
 *Assignment: Assignment 1 - C Foundations
 */

#include<stdio.h>
#include<string.h>


int any (char* str1, char* str2) {

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

    /* given str1 whenever any char from str2 is found for the first time*/

    for(int i=0; i<length2; i++)
    {
        for(int j=0; j<length1; j++)
        {
            if(str2[i]==str1[j])
            {
                return j;
            }
        }
    }
    return -1;

}

int main() {

    char str1[100], str2[100];

    printf("String1 : ");
    scanf("%s", str1);

    printf("String2: ");
    scanf("%s", str2);

    printf("%d\n", any(str1, str2));

    return 0;
}