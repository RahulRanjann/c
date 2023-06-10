#include <stdio.h>
int Larg(int arr[], int size)
{
    int larg = 0
    for (int  i = 1; i < size; i++)
    {
        if (arr[0] < arr[i])
        {
           arr[0] = arr[i];
        }
        
    }
    return  arr[0];
    
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
   int larget = Larg(arr, size);
   int secondLarget = secLarg(arr, size , larget);
   printf("\nThe second largest element of array is %d", num);
   
   return 0;
}
