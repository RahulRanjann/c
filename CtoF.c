#include<stdio.h>
int tempConverter(int c);
int main(int argc, char const *argv[])
{
    int n ;
     printf("Enter the temperature in celsius to convert in fahrenheit \n");
     scanf("%d",&n);
     tempConverter(n);
    return 0;
}

int tempConverter(int c)
{
    int fahrenheit = (c*9/5)+32;
    printf("%d celsius is = %d fahrenheit", c ,fahrenheit);


    return 0;
}