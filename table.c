#include<stdio.h>
void tabel();
int main(int argc, char const *argv[])
{
    printf("Enter a number which you want tabel of \n");
    int num1 ;
    scanf("%d", &num1);
    tabel(num1);
    return 0;
}


void tabel(int num)
{
    int mul;
    for (int i = 1; i <= 10; i++)
    {
        mul =num*i;
        printf(" %d x %d = %d \n", num, i, mul );
    }
    
}