#include<stdio.h>
int main()
{
    int num1,num2,sum;
    sum = num1 + num2;
    printf("Enter your first no.");
    scanf("%d", &num1);
    printf("Enter your second no.");
    scanf("%d", &num2);
    printf("The sum of %d + %d = %d",num1,num2,sum );
    return 0;
}
