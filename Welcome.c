#include<stdio.h>
#include<string.h>
 
void greeting();
int main()
{

    char name[20];
    printf("Enter you name\n");
    scanf("%s",&name);
    greeting();
    printf(", %s", name);
    

    return 0;
}

void greeting()
{
    char var[20];
    printf("Where are  you from?");
    printf("choose one of these \n india  or  french \n");
    scanf("%s",&var);
    int x =strcmp(var, "india"); // strcmp this fucnction int value, this will return 0 if the both string are same else 1.
    int y =strcmp(var, "french");


    if (x == 0)
    {
        printf("Namaste");
    }
    else if (y == 0)
    {
        printf("bonjour");
    }
    else
    {
        printf("hello");
    }
      
}
