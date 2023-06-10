#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1,num2,result,m,n;

    printf("Enter your first number:-\t");
    scanf("%d",&num1);
    m = num1;
    printf("Enter your second number:-\t");
    scanf("%d",&num2);
    n = num2;
    while(m != n)
    {
        if(m>n)
            {
                m = m-n;
            }
        else
        {
            n = n-m;
        }
    }

    printf("%d is  the GCD of %d and %d", m,num1,num2);
    return 0;
}
