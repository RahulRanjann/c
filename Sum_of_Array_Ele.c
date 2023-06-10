#include <stdio.h>

int sum_of_Array(int arr[],  int size)
{
    int sum = 0;
    printf("size of array:-%d\n",size);
    printf("The sum of the element of array is:-\n");
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    int arr[] = {2,36,4,8,6,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d",sum_of_Array(arr,size));

   return 0;
}

