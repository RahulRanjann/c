#include <stdio.h>

#define max 10

typedef struct
{
    int arr[max];
    int top;

} stack;

stack push(stack s)
{
    int n;
    printf("enter a number to push in stack \n");
    scanf("%d", &n);
    s.top++;
    s.arr[s.top] = n;
    return s;
}

stack pop(stack s)
{

    printf("%d", s.arr[s.top]);
    s.top--;
    return s;
}

int isEmpty(stack s)
{
    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void display(stack s)
{
    for (int  i = s.top; i >= 0; i--)
    {
        printf("%d\t",s.arr[i]);
    }
    
}

int isFull(stack s)
{
    if (s.top == max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    stack s;
    s.top = -1;
    int c;
    while (c != -1)
    {

        printf("\nEnter your choice \n1. push \n2. pop \n3. isEmpty \n4. isFull \n5. display \n-1. exit \n");

        scanf("%d", &c);

        switch (c)
        {
        case 1:
            if (isFull(s) == 1)
            {
                printf("OverFlow");
            }
            else
            {   s=push(s);

            }
            break;

        case 2:
            if (isEmpty(s) == -1)
            {
                printf("Undrflow");
            }
            else
            {
                s=pop(s);
            }
            break;
        case 5:
            display(s);
            break;
        default:
            printf("bye bye");
        }
    }
    return 0;
}
