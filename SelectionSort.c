#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, a[10];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nUnsorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
