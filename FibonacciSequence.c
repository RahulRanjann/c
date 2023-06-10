#include<stdio.h>
int fib(int n);
int main(int argc, char const *argv[])
{ 
    printf("Enter a no. to print Fibonacci series \n");
    int n ;
    scanf("%d", &n);
    printf("\n");
    fib(n);
    return 0;
}
 
 int fib(int n)
 {
    int n1 = 0 ;
    int n2 = 1;
    int n3;
    printf("0 \n1\n");
    for (int i = 1; i <= n-2; i++)
    {
        n3 = n1+ n2;
        printf("%d\n",n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;

 }
