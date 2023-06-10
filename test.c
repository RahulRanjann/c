// #include<stdio.h>

// int Add(int* a , int* b)
// {
//     int sum = *a+*b;
//     return sum;

// }

// int main(int argc, char const *argv[])
// {
//     int num,num1;
//     printf("Enter your first no. ");
//     scanf("%d",&num);
//     printf("Enter your second no.");
//     scanf("%d",&num1);
//     printf("The sum of the two no. is %d \n",Add(&num, &num1));
//     return 0;
// }

//          LINKED LIST = v
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    int  data;
    struct node *next;

} node;

void display(node *ptr)
{
    while (ptr!= NULL)
    {
        printf("The data is %d \n",ptr->data);
        ptr = ptr->next;
    }
    
}

int main()
{
    node *head;
    node *second;
    node *third;
    node *last;

    head = (node*) malloc(sizeof(node));
    second = (node*) malloc(sizeof(node));
    third = (node* )malloc(sizeof(node));
    last = (node*) malloc(sizeof(node));
   
    head->data = 100;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 27;
    third->next = last;

    last->data = 63;
    last->next = NULL;

    display(head);


    return 0;
}
