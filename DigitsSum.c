#include<stdio.h>

void digitSum(int n);
int main(int argc, char const *argv[])
{
   digitSum(654);
    return 0;
}
void digitSum(int n)
{
    int m, sum = 0;
    while (n>0)
    {
       m = n % 10 ;
       sum = sum + m;
       n = n/10;
    }
    printf(" The sum of the digit is %d",sum);
    
}
