#include<stdio.h>

int sum(int);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the vale of N ,to get sum of N  natural no. \n:-");
    scanf("%d",&n);
    printf("The sum of %d natural no. is",n);
    printf("%d",sum(n));
    return 0;
}

int sum(int n)
{
    if(n>=1)
    {
        return(n+sum(n-1));
    }
    else
    {
        return 0;
    }
}
