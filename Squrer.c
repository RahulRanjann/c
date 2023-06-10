#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    printf("Enter a base number\n");
    int base;
    scanf("%d",&base);
    printf("Enter a power\n");
    int power;
    scanf("%d", &power);

    printf("%.2f", pow(base, power));
    
    return 0;
}
