/* Prints a pyramid with provided number of steps
 *
 *Author - Armaan Jain 1910990432
 *Input - 1 Postitve Integet
 *Assignment: Assignment 1 - C Foundations

 */

#include <stdio.h>

int main(){

    int steps;
    /* Scans number of steps */
    scanf("%d", &steps);
    for(int i=0; i < steps; i++)
    {   
        /* This loop prints the spaces to shape the Pyramid */
        for(int j=0; j<(steps-i+1);j++)
        {
            printf(" ");
        } 
        /* This loop prints "#" Sybbols of the Pyramid */  
        for(int k=0; k<i+1;k++)
        {
            printf("# ");
        }    
        printf("\n");     
    }

    return 0;
}