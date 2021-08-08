#include <stdio.h>
#include <ctype.h>
#include <limits.h>


int top = -1;
int stack[100];
int size = 100;



/* Aux functions */
int is_empty()
{
    return top == -1 ? 1 : 0;
}

int is_full()
{
    return top == size ? 1 : 0;
}

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
    }
}

/* Pops an element and returns it */
int pop() 
{
    printf("POP REQUESTED");
    for(int i=0; i<=top; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
    if(!is_empty())
    {
    int n = stack[top];
    top--;
    return n;
    }
    else
    {
        printf("Stack Underflow");
        return INT_MIN;
    }
}


int main()
{
    char input_string[100];
    scanf("%[^\n]s",input_string);
    for(int i=0; input_string[i]!='\0'; i++)
    {

        if(isdigit(input_string[i]))
        {   
            int val = 0;
            while(isdigit(input_string[i]))
            {
                int digit = input_string[i]-'0';
                val *= 10;
                val += digit;
                i++;
            }
            push(val);

        }
        else if(!isspace(input_string[i]))
        {
            // printf("this is an operatir %c\n", input_string[i]);
            int operand1 = pop();
            int operand2 = pop();
            int val;

            if(input_string[i] == '+')
            {
                val = operand1 + operand2;
            }
            else if(input_string[i] == '-')
            {
                val = operand2 - operand1;
            }      
            else if(input_string[i] == '*')
            {
                val = operand1 * operand2;
            }        
            else if(input_string[i] == '/')
            {
                val = operand2 * operand1;
            }
            push(val);
        }
    }

    for(int i=0; i<=top; i++)
    {
        printf("%d ",stack[i]);
    }
}