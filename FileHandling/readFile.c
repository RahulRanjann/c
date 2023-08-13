#include <stdio.h>
int main() {
    FILE *fil;
    char ch;
    fil = fopen("HelloWorld.txt", "r");
    while (1)
    {
        ch = fgetc(fil);
        if (ch == EOF)
        {
            printf("Error!");
            break;
        }
        else
        {
            printf("%c",ch);
        }
        
    }
    

   return 0;
}
