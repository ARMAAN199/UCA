// Implementation of stack is taken from the other assignment.


#include<stdio.h>


int top = -1;
/* Size could be any. But in the figure shown in the assignment it is 7 */
char stack[100];
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
void push(char n) 
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
char pop() 
{
    if(!is_empty())
    {
    char n = stack[top];
    top--;
    return n;
    }
    else
    {
        printf("Stack Underflow");
        return '\0';
    }
}

int verify(char b, char a)
{
    // printf("%c%c", a,b);
    int ismatching = (a == ')' && b == '(') || (a == '}' && b == '{') || (a == ']' && b == '[');
    printf("%d\n",ismatching);
    return ismatching;
}

int main() {
    char str[100];
    scanf("%[^\n]s", str);
    int length = 0;
    while (str[length] != '\0')
    {
      length++;
    }
    for(int i=0; i<length; i++)
    {
        if(str[i]=='{' || str[i]=='(' || str[i]=='[')
        {
            push(str[i]);
        }
        else
        {
            if (!verify(pop(),str[i]))
            {
                printf("false");
                return 0;
            }
        }
    // for(int j=0; j<top; j++)
    // {
    //     printf("%c",stack[j]);
    // }  
    }
    if (is_empty())
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    // for(int i=0; i<top; i++)
    // {
    //     printf("%c",stack[i]);
    // }
    
    
    return 0;
}