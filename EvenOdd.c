#include <stdio.h>

void evenOdd()
{
    printf("Enter a number to check that is even or odd \n");
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is  even", n);
    }
    else
    {
        printf("%d is odd",n);
    }
    
    
    
}

int main()
{
    
    evenOdd();
    return 0;
}
