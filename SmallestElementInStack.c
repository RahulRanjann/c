#include <stdio.h>
#include <stdlib.h>

int smaller(int *ptr , int size)
{
    int a = *ptr;
    for (int  i = 0; i < size; i++)
    {
        if (a > *(ptr+i))
        {
           a = *(ptr+1);
        }
        
    }
    return a;
    
}

int main() {
    int n ;
    printf("Enter size of array \n");
    scanf("%d",&n);
 int *ptr = (int*)(malloc(n*sizeof(int)));
 printf("Enter the elements of array \n");
 for (int  i = 0; i < n; i++)
 {
    scanf("%d",(ptr+i));
 }

 int small = smaller(ptr,n);
 
printf("The smallest element of array is %d",small);

   return 0;
}
