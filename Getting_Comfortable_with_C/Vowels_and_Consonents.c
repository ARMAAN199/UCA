/* Prints the number of vowels and consonants in a String.
 *
 *Author - Armaan Jain 1910990432
 *Input - 1 String
 *Assignment: Assignment 1 - C Foundations

 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    char* str = calloc(1,sizeof(char));
    scanf("%[^\n]s",str);
    int vow =0, len =0;
    /* Testing if any variable is a vowel */
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
           str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' ||
           str[i] == 'u' || str[i] == 'U')
        {
            vow++;
        }    
        len++;
    }
    
    printf("Vowels = %d , Consonants = %d", vow, len-vow);

    return 0;
}