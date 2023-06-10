# include<stdio.h>
 void main()
 {
  int n1,n2;
  printf("Enter your first number");
  scanf("%d",&n1);
  printf("Enter your second number");
  scanf("%d",&n2);
  int result = GCD(n1, n2);
  printf("The GCD of %d and %d is %d",n1 ,n2 ,result);
 }


 int GCD(int m, int n)
  {
      int num1 = m;
      int num2 = n;
      int rem;

      while(num2 != 0)
  {
      rem = num1 % num2;
      num1 = num2;
      num2 = rem;

  }
  return num1;
  }
