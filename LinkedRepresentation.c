#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodeptr;

typedef struct node{
  int data;
  nodeptr lchild;
  nodeptr rchild;

}node;

void inorder(nodeptr root)
{
    if (root)
    {
        inorder(root->lchild);
        printf("%d",root->data);
        inorder(root->rchild);

    }
    
}

nodeptr getNode()
{
    nodeptr head;
    head = (nodeptr)malloc(sizeof(nodeptr));
    return head;
}

nodeptr createBinaryTree(int item)
{
    int x;
    if (item!= -1)
    {
        nodeptr temp = getNode();
        temp->data = item;

        printf("Enter the Lchild of %d",item);
        scanf("%d",&x);
        temp->lchild = createBinaryTree(x);

        printf("Enter the Rchild of %d",item);
        scanf("%d",&x);
        temp->rchild = createBinaryTree(x);

        return temp;
    }
    return NULL;
    
}

int main() {
   
   nodeptr root =NULL;
   int x;

   printf("Creating  the tree:\n");
   printf("Enter the root:\n");
   scanf("%d",&x);

   root = createBinaryTree(x);
   inorder(root);


   return 0;
}
