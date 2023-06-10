#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size ;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Ente the %d index:- \t",i);
        scanf("%d",&arr[i]);
    }

    int sum = 0, *p;
    for (p = &arr[0]; p<= &arr[size]; p++)
    {
        sum += *p;
    } 
     printf("sum is %d", sum);
    
    

    return 0;
}
