#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int checksubstr(char str[],char  sub[])
{   
    int c1;
    int c=0;
    int flag;
    int n=strlen(str);
    int m=strlen(sub);
    int i;
    for(i=0;i<(n-m);i++)
    {
        c1=0;
        flag=1;
        for(int j=i;c1<m;j++,c1++)
        {
            c++;
            if(str[j]!=sub[j])
            {
                flag=0;
                break;

            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
        return c;
    }

}

int main()
{
    char str[20],sub[20];
    printf("enter the string");
    scanf("%c",str);
    printf("enter the substring");
    scanf("%c",sub);
    int count=checksubstr(str,sub);
    printf("count is %d",count);
    return 0;
}