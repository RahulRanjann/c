#include <stdio.h>
int main()
{  
    int size , flag = 0;
    printf("Enter a number to define size of array\n");
    scanf("%d", &size);
    int arr[size];
    
    for (int i = 0; i < size; i++)  
    {
        printf("Enter the value of array[%d] \n ", i);
        scanf("%d",& arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                flag = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = flag;

            }
        }
        
    }
    printf("The sorted list is");
    for (int i = 0; i < size; i++)
    {
        printf(" %d,", arr[i]);
    }
    

    return 0;
}
