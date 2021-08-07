/* Custom implementaion of queues using arrays
 *
 *Author - Armaan Jain 1910990432
 *Assignment: Day_2_Coding_Assignment
 */

#include<stdio.h>
#include<limits.h>



int size = 7;
/* Size could be any. But in the figure shown in the assignment it is 7 */
int queue[7];
int tail = -1;
int head = -1;


void enque(int n)
{
    if(is_full()) 
    {
        printf("Queue Already Full");
        return INT_MIN;
    }
    tail = (tail+1)%size;
    queue[tail] = n;
    /* For first element in queue */
    if(head == -1) {
        head = 0;
    }
}

int deque() {
    if(is_empty()) 
    {
        printf("Empty Queue");
        return INT_MAX;
    }
    int popped = queue[head];
    head = (head+1)%size;
    return popped;
}

int peek()
{
    if(!is_empty())
    {
        return queue[head];
    }
    else
    { 
    printf("Queue is Empty\n");
	return INT_MIN;
    }
}

int is_full()
{
    if((tail+1)%size == head)
    {
        return 1;
    }
    return 0;
}

int is_empty()
{
    /* No element was added to the queue */
    if(head == -1 || head-1 == tail) {
        return 1;
    }
    return 0;
}

int main()
{
    return 0;
}