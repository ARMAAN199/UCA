/* Prints all lines longer than 80 characters
 *
 *Author - Armaan Jain 1910990432
 *Input - A File or location
 *Assignment: Assignment 1 - C Foundations
 */

#include <stdio.h>
#include <string.h>

int main() {

FILE* file = fopen("7_textfile.txt", "r"); 

/* Ends the progream if file is not found */
if(!file){
printf("File not Found \n");
return -1;
}

char nextline[10000];

/* We iterate through each line and calculate its length using another while loop
    then we print the line if its length is longer than 80 characters.
 */
while (fgets(nextline, sizeof(nextline), file)) {
    int size_of_line = 0;
    int i=0;
    while(nextline[i]!='\0')
    {
        size_of_line++;
        i++;
    }
    if(size_of_line > 80)
    printf("%s", nextline);
}

/* Freeing file pointer */
fclose(file);

}