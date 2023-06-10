#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node* next;
    int data;
} node;

void display(node* head)
{
    node*ptr = head;
    printf("The elements are :-");
    do
    {
        printf("%d \t",ptr->data);
        ptr = ptr->next;
    } 
    while (ptr != head);
    
}

node* insertAtFirst(node* head, int data)
{
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = data;
    node* p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next= head;
    head = ptr;
    
    return head;
}

int main() {
  node* head;

  node* first = (node*)malloc(sizeof(node));
  node* second = (node*)malloc(sizeof(node));
  node* third = (node*)malloc(sizeof(node));
  node* last = (node*)malloc(sizeof(node));
  
  head = first;

  first -> data = 10;
  first -> next = second;

  second -> data = 20;
  second -> next = third;

  third -> data = 30;
  third -> next = last;

  last -> data = 40;
  last -> next = first;

head = insertAtFirst(head, 500);
display(head);
   return 0;
}
