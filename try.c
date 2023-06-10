#include <stdio.h>
#include<limits.h>

int main()
{
    int size;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the element of array:- \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
    }
    int max2 = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max2 && arr[i] != max)
            max2 = arr[i];
    }
    printf("%d is The second largest element in the array", max2);

    return 0;
}