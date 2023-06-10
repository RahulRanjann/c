#include <stdio.h>
int main() {
    int a =10;
    int *ptr;
    // ptr = &a;
    // printf("%d\n",a);
    // // afte changing  vale of a
    // *ptr = 15;
    // printf("%d \n",a);

    // //  pointers to pointers

    // int** q;
    // q = &ptr;
    
    // printf("%d\n", **q);
    
    // void** q;
    // q = &ptr;                        // error because of vodi 
    // printf("%d",**q);

    char* ch;
    ch = (char*) &a;    // here we ch sotre character not integer because of type cast
    printf("%d \n",ch); // now this will return address of character

   return 0;
}
