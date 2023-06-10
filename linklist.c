#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

// display function
void print(node *n)
{
    printf("The element are:- ");
    while (n != NULL)
    {
        printf("%d\t", n->data);
        n = n->next;
    }
    printf("\n");
}

// insertAt first index
node *insertAt0(node *head, int d)
{
    printf("After insertAt0\n ");
    node *p = (node *)malloc(sizeof(node));
    p->next = head;
    p->data = d;
    return p;
}

// insert in Between
node *insertInBetween(node *head, int d, int index)
{
    if (index == 0)
    {
        printf("This method will not work at the index 0");
    }
    else
    {

        printf("After insertAt%d \n", index);
        node *p = head;
        node *p2 = (node *)malloc(sizeof(node));

        while (1 != index - 1)
        {
            p = p->next;
            index--;
        }
        p2->data = d;
        p2->next = p->next;
        p->next = p2;
        return head;
    }
}

// insert at the end
node *insertAtEnd(node *head, int data)
{
    printf("After insertion in end  \n");
    node *p = head;
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// insert after a node
node *insertAfterNode(node *head, node *prevNode, int dat)
{
    printf("insert after a node");
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = dat;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

// Deletation of linked list
node *deleteFromFirst(node *head)
{
    printf("First Element deleted for the linked List");
    node *p = head;
    head = head->next;
    free(p);
    return head;
}

// Deleting after a index
node *deleteAfterindex(node *head, int pos)
{
    printf("Succesfully Deleted the node at %d\n", pos);
    node *p = head;
    node *q = head->next;
    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

// Delete the last node
node *deleteFromLastNode(node *head)
{
    printf("Sucessfuly delete the last Node");
    node *p = head;
    node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// reverse a linkedList
void reverseElement(node *head)
{
    if (head->next == NULL)
        return;
    reverseElement(head->next);
    printf("%d", head->data);
}

int main(int argc, char const *argv[])
{
    node *head;
    node *second;
    node *third;
    node *last;

    printf("the size of node is %d\n", sizeof(node));

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    last = (node *)malloc(sizeof(node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 5;
    third->next = last;

    last->data = 100;
    last->next = NULL;

    print(head);
    head = insertAt0(head, 17);
    print(head);
    head = insertInBetween(head, 15, 3);
    print(head);
    head = insertAtEnd(head, 200);
    print(head);
    head = insertAfterNode(head, third, 9999);
    print(head);
    head = deleteFromFirst(head);
    print(head);
    head = deleteAfterindex(head, 4);
    print(head);
    head = deleteFromLastNode(head);
    print(head);

    printf("print the linklist in revese order");
    // reverseElement(head);
    printf("\n\nYou are doing great!");

    return 0;
}
