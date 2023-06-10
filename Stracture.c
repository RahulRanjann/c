#include <stdio.h>
struct add
{
    int a;
    int b;
   
};

typedef struct
{
    int a;
    int b;
    
}diff;


int main() {
    struct add a1;
    a1.a = 10;
    a1.b = 20;

    diff d1;
    d1.a = 20;
    d1.b = 10;

    int sum = a1.a + a1.b;
    int sub = d1.a - d1.b;
    printf("The sum of the no. is %d \n", sum);
    printf("The difference of the two no. is %d",sub);
   
   return 0;
}
