#include <stdio.h>
typedef struct 
{
    int data;
    struct node *next;
} node;

int main() {
 
   int a1= 10;
   int *p = &a1;
   int **p2 = *p;
   printf("%d",*p);
   return 0;
}
