#include <stdio.h>
#include <string.h>

void LOOP(char* name)
{
    int i = 0;
    while (name[i] != '\0') //  (*name(+i) != '\0') ==> both are same
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");


/*
    while(*name != '\0')
    {
        printf("%c",*name);
        name++;
    }
    printf("\n");
*/

}
int main() {
    char name[20] = "Rahul";
    LOOP(name);
   
}
