#include <stdio.h>
int secLarg(int arr[], int size)
{
    int a, b;
    a = b = arr[0];
    for (int  i = 0; i < size; i++)
    {
        if (a <= arr[i])
        {
           a = arr[i];
        }

    }
     for (int  i = 0; i < size; i++)
    {
        if (a <= arr[i]  && arr[i !=a])
        {
           b = arr[i];
        }

    }
    return b;

}



int main() {
   int size ;
   printf("Enter the size of array\n");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the element of array:- \n");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
   int num = secLarg(arr, size);
   printf("\nThe second largest element of array is %d", num);

   return 0;
}
/*
new program 


*/
#include <stdio.h>
int smallest(int *p)
{
    int a=*p;
for (int i = 0; i < size; i++)
    {
        if(*(p+i)<a)
        a=*(p+i);
    }
    return a;
}
int main() {
   int size ;
   printf("Enter the size of array\n");
   scanf("%d",&size);
   in
    int *p = (int*) malloc(size*sizeof(int));
   printf("Enter the element of array:- \n");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",(p+i));
    }
    int a = smallest(p);
    printf("%d ",a);
    
    
    
    

   return 0;
}