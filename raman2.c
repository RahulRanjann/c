#include<stdio.h>

int main()
{
    int x = 4, y=0;
    while(x>=0)
    {
        x--;    //x=3;  x=2;    x=1;
        y++;    //y=1;  y=2;    y=3;
        if(x==y)
        {
           continue;
        }
        else
        {
            printf("%d %d \n",x,y);
        }

    }
}
