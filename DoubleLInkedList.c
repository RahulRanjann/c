#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;

void print(node *n)
{
    printf("Forward Diraction\n");
    printf("The element are:- ");
    while (n != NULL)
    {
        printf("%d\t", n->data);
        n = n->next;
    }
    printf("\n");
}

void printrev(node *n)
{
    printf("Backward Diraction\n");
    printf("The element are:- ");
    while (n != NULL)
    {
        printf("%d\t", n->data);
        n = n->prev;
    }
    printf("\n");
}

void DisplayLinkBothside(node* head, node* end)
{
    print(head);
    printf("\n");
    printrev(end);
}

int main() {
    node* head = (node*)malloc(sizeof(node));
    node* second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));
    node* last = (node*)malloc(sizeof(node));

    head->prev = NULL;
    head->data = 10;
    head->next = second;
    
    second->prev = head;
    second->data = 20;
    second->next = third;
    
    third->prev = second;
    third->data = 30;
    third->next = last;

    last->prev = third;
    last->data = 40;
    last->next = NULL;
    DisplayLinkBothside(head , last);
   return 0;
}
