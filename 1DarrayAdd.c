#include<stdio.h>

double Add(int n)
{
	double arr[n];
	double sum = 0 ;
	printf("Enter values of Array \n");
	for(int i=0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
	}
	
	for(int i= 0; i < n; i++)
	{
		sum =sum + arr[i];
		
	}
	printf("Sum of all the values of the array are %lf  \n", sum);
	return 0;
}

int main()
{
	printf("Enter size of arrray \n");
	int n = 0;
	scanf("%d", &n);
	Add(n);
	return 0;
}