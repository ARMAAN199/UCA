/* Tower of Hanoi Problem With Recursion
 *
 *Author - Armaan Jain 1910990432
 *Input - (Size of number of rings on the first plate)
 *Assignment: Assignment_5_Recusrion 
 */

#include <stdio.h>

/* Global Variable for keeping count of moves */
int count = 0; 

void tower_of_hanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        count++;
        printf("%c TO %c\n", from, to);
        return;
    }
    /* 
    ** For future reference
    Basically, we call this function for n-1 until n reaches 1 in which case we can simply move
    the ring from "from" to "to".
    Lets say, we have to do it for a inital number 4. 
    Now, we call the function for 3. But this time we keep the destination rod as our auxiliary rod.
    So now when all the rings but the biggest one have been shifted to the aux we can shift the biggest
    one directly to the target and then move all the smaller rings from auc to dest.
    */
    tower_of_hanoi(n-1, from, aux, to);
    printf("%c TO %c\n", from, to);
    count++;
    tower_of_hanoi(n-1, aux, to, from);
}
  
int main()
{
    int n;
    printf("Initial number of disks on 1st plate = ");
    scanf("%d",&n);
    tower_of_hanoi(n, 'A', 'C', 'B');
    printf("Total movements required = %d", count);
    return 0;
}