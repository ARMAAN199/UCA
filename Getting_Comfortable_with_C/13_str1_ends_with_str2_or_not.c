/* Program returns 1 if str1 ends with str2 else returns 0
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 Strings
 *Assignment: Assignment 1 - C Foundations
 */

#include<stdio.h>
#include<string.h>


int strrindex (char* str1, char* str2) {

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

        for(int j=length1-1; j>=0; j--)
        {
            if(str1[j]==str2[0])
            {
                int count =0, k=j;
                while (str1[k] == str2[count] && str2[count] != '\0')
                {
                    count++;
                    k++;
                }
                if(count==length2 && k == length1)
                {
                    return 1;
                }
            }
        }
    return 0;

}

int main() {

    char str1[100], str2[100];

    printf("String1 : ");
    scanf("%s", str1);

    printf("String2: ");
    scanf("%s", str2);

    printf("%d\n", strrindex(str1, str2));

    return 0;
}