#include<stdio.h>

void fib(int);

int main(int argc, char const *argv[])
{
    printf("Enter a no. to print fibonacci series\n");
    int n ;
    scanf("%d",&n);
    printf("0\t1\t");
    fib(n-2);
    return 0;
}

void fib(int n)
{
    static int num1 = 0, num2 = 1, num3;
     if (n>=1)
     {
        num3 = num1+num2;
        printf("%d \t", num3);
        num1 = num2;
        num2 = num3;
        fib(n-1);
     }

}
