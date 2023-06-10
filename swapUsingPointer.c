#include<stdio.h>
void swap(int *x , int *y);
int main(int argc, char const *argv[])
{
    int a , b;
    printf("Enter a number");
    scanf(" %d",&a);
    printf("Enter a anoter number ");
    scanf(" %d",&b);
    swap(&a,&b);
    printf("after swaping the value of\n a =  %d \n b = %d",a, b);

    return 0;
}

void swap(int *x, int *y)
{
    int t = *y;
    *y = *x;
    *x = t;

   
}