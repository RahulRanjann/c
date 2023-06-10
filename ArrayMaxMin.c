#include <stdio.h>
int main()
{

    int size;
    int Arr[size];
    int max = Arr[0];
    int min = Arr[0];
    printf("Enter size of array");
    scanf("%d", &size);

    printf("Enter vales of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d\n", &size);
    }

    for (int i = 0; i < size; i++)
    {
        if (Arr[i]>max)
        {
            max = Arr[i];
        }
        if (Arr[i]<min)
        {
            min = Arr[i];
        }
        
        printf("\n Maximum :-",max);
        printf("\n min:-",&min);
        
    }

    return 0;
}
