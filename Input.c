#include <stdio.h>
int main()
{
    printf("Enter your name ");
    char ch[10];
    scanf("%s", ch);
    printf("Enter your age ");
    int age;
    scanf("%i", age);
    printf("Your name is %s \n ", ch);
    printf("You are %d years old", &age);

    return 0;
}