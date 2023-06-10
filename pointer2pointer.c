#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 5;
    int *p = &i;
    int **ptr = &p;
    printf("the value of i is  %d\n",**ptr);
    
    printf("%p\n",&ptr);
    printf("%p\n",&p);
    printf("%p\n",&i);
    return 0;
}
