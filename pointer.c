#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age = 22; // this is a simple variable
    int *ptr = &age; // *ptr is a pointer, *ptr have address of(&) age
    int _age = *ptr; // _age is another variable who have value of(*) *ptr 
    printf("age %d \n *ptr %d \n _age %d \n",age, *ptr, _age);





    return 0;
}
