#include <stdio.h>

void primeFactorization(int n) {
    int i;
    int k;
    for (i = 2; n!=1; i++)
    {
        k = 0;

        if (n%i==0)
        {
            printf("%d\t",i);
            n = n/i;
            k=1;

        }
        if (k==1)
        { 
            i--;
        }
        
        
    }
    
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Prime factorization of %d: ", number);
    primeFactorization(number);

    return 0;
}
