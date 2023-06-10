#include <stdio.h>

int fact(int);
/*

int main()
{
    int n = 5;
    printf("Factorial of the %d:- \t", n);
    printf("%d",fact(n));

    return 0;
}

int fact(int n){
    int mult = 1;
    for (int i = 2; i <= n; i++) {
         mult *= i ;
    }
    return mult;
    
}

*/

int main(int argc, char const *argv[])
{
    int m;
    printf("Enter a no. which you want to factorial of \n:-");
    scanf("%d", &m);
    printf("Factorial of the %d:- \t",m);
    printf("%d",fact(m));
    return 0;
}

int fact(int n){
     int mult =1;
    if (n >= 1)
    {
        return (n*fact(n-1));
    }
    else
    {
        return 1;
    }
    
}
