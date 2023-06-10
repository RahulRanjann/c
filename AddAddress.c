#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    unsigned long long c = (unsigned long long)&a, d = (unsigned long long)&b;
    printf("a = %p, b = %p\na + b = 0x%llx", &a, &b, c+d);

    return 0;
} 