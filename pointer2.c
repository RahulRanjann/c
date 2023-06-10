#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 20;
    int *p = &num;

    printf("%p\n", &num);// here i'm trying to print the address of num
    printf("%p\n",p);// here i'm trying to print the vale of p
    printf("%p\n",&p); // this give us address of p


    printf("%d\n",*p);// this give us the vale of the address which is stored in *p
    printf("%d\n",*(&num));// first it gives the address of num and then gives us the value at the address
    
    return 0;
}
