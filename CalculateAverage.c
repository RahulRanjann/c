#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i, average, sum = 0;
    
    printf("Enter the size of array \n");
    scanf("%d", &n);
    int arr[n];
  
    printf("Enter the elements of the array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);     
         sum += arr[i];                                 
    }
  
    
        average = sum /n;
         
    printf("The average of the number is %d", average);

    return 0;
}
