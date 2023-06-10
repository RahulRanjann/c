#include <stdio.h>
#include <stdlib.h>
#define max  5

int arr[max];
int front = -1;
int rear = -1;

void enqueue()
{
    int data ;
    if(rear == max-1)
    {
        printf("Overflow");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Enter Element :");
        scanf("%d",&data);
        rear ++;
        arr[rear] = data;
        
    }
}
void dequeue()
{
   if (front == -1 || front > rear)
   {
    printf("underFlow");
   }
   else
   {
    printf("\n Deleletd : %d",arr[front]);
    front++;
   }
    
}
void dis();

int main()
{

    int num;
    printf("1. Insert \t2. Delete\t3. Display\t4. Exit\n");
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            enqueue();
            break;
        
        case 2:
            dequeue();
            break;
        
        case 3:
            // display();
            break;
        
        case 4:
            // exit(0);
            break;
        
        default:
           printf("Wrong input");
        }
    }

    return 0;
}
