#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter the size of array");
    int size ;
    scanf("%d",&size);
    int arr[size];
     *arr = 10;
    printf("Enter a value of array from the 1st index");
    for (int i = 1; i < size; i++)
    {
        scanf("%d",&*(arr+i));
    }
    printf("The value of array are\n");
    for (int i = 0; i < size; i++)
    {

        printf("%d\n",arr[i]);
    }
    
    


    return 0;
}
