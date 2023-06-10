#include <stdio.h>

int main(int argc, char const *argv[])
{
     int a, b;
  printf("Enter 1st no.");
  scanf("%d", &a);
  printf("Enter 2st no.");
  scanf("%d", &b);
  int *p, q;
  p = &a;
  q = *p;

  printf("Using point the value of a is %d \n", q);

      printf("Sum of the a and b %d", (a + b));
    return 0;
}
