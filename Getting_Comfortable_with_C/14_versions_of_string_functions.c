/* Implementation of String functions
 *
 *Author - Armaan Jain 1910990432
 *Input - 2 Strings and an integer
 *Assignment: Assignment 1 - C Foundations
 */

#include<stdio.h>
#include<string.h>


/* Copies n Elements of Str2 to Str1*/
void strnCpy (char *str1, char *str2, int n) {
    int i;
    for (i = 0 ; i < n ; i++ )
    {
	str1[i] = str2[i];
    }
    str1[i]='\0';
}

void strnCat (char *str1, char *str2, int n) {

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

    int i;
    for(i = 0; (i < n) && (i < length2) ; i++)
    {
        str1[length1 + i] = str2[i];
    }
    str1[length1 + i -1] = '\0';
}


int strnCmp (char *str1, char *str2, int n) {

    for(int i = 0 ; (i < n) && str2[i]!='\0'  ; i++) 
    {
        if (str1[i] < str2[i]) 
        {
	    return -1;
	    }  
	    
        else if (str1[i] > str2[i])
        {
	    return 1;
	    }
    }
    return 0;
}


int main() {

    char str1[10000], str2[10000];
    int n;

    printf("string 1 :");
    scanf("%[^\n]s", str1);
    printf("String 2 :");
    scanf("\n%[^\n]s", str2);

    printf("Upto what value the function is to be executed ");
    scanf("\n%d", &n);

    strnCat(str1, str2, n+1);
    printf("%s", str1);

    return 0;
}