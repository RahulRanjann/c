#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
}node;

 node *createNode(int ele) {
    node *newNode;
    newNode=malloc(sizeof(struct node));
    newNode->data=ele;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

void preorder( node *root) {
    if(root!=NULL) {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node *root) {
    if(root!=NULL) {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void postorder( node *root) {
    if(root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

node *createBST( node *root,int ele) {
    if (root==NULL) {
        root=createNode(ele);
    }
    else {
        if(ele<root->data) {
            root->left=createBST(root->left,ele);
        }
        else if(ele>root->data) {
            root->right=createBST(root->right,ele);
        }
        else {
            printf("\nNo duplicates allowed");
            return NULL;
        }

    }
    return root;
}

void main() {
    int ele=0;
    node *root=NULL;
    while(ele!=-1) {
        printf("Enter ele : ");
        scanf("%d",&ele);
        if(ele!=-1)
        root=createBST(root,ele);
    }
    printf("\nPreorder: ");
    preorder(root);
    printf("\nInorder: ");
    inorder(root);
    printf("\nPostorder: ");
    postorder(root);
}
