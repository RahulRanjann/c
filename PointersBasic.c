#include <stdio.h>

int main() {
    
    int a = 10;
    int *p;
    p = &a;
    printf("%d \n", &a);  // address of a
    printf("%d \n",p);   // address that store in p
    printf("%d \n",&p); //adddress of P
    printf("%d \n",*p); // vale of a that is 10

   return 0;
}
