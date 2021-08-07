/* Custom implementaion of stack using arrays
 *
 *Author - Armaan Jain 1910990432
 *Assignment: Day_2_Coding_Assignment
 */


#include<stdio.h>
#include<limits.h>


int top = -1;
/* Size could be any. But in the figure shown in the assignment it is 7 */
int stack[7];
int size = 7;


/* Pushes to the top of the stack */
void push(int n) 
{
    top++;
    if(is_full())
    {
        printf("Stack Overflow");
    }
    else
    {
        stack[top] = n;
        printf("Pushed the value to the stack");
    }
}

/* Pops an element and returns it */
int pop() 
{
    if(!is_empty())
    {
    int n = stack[top];
    top--;
    printf("Popped %d from stack ", n);
    return n;
    }
    else
    {
        printf("Stack Underflow");
        return INT_MIN;
    }
}

/* Returns the head wihtout popping */
int peek() 
{
    if(!is_empty())
    {
        return stack[top];
    }
    return INT_MIN;
}

/* Aux functions */
int is_empty()
{
    return top == -1 ? 1 : 0;
}

int is_full()
{
    return top == size ? 1 : 0;
}

int main() {
    return 0;
}