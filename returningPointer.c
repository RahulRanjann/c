#include <stdio.h>
#include <string.h>

int fun(int *a)
{
    
    if(*a % 2 == 0)
    {
        *a = 1;      
       return *a;
    }
    else
    {
        *a = 0;
        return *a;
    }

}

int main() {
   int a ;
   printf("enter a number ");
   scanf("%d",&a); 
    int num = fun(&a);
   if (num == 1)
   {
     printf("even");
   }
   else
   {
    printf("odd");
   }
   
   return 0;
}
