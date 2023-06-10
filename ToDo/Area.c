#include<stdio.h>

float squareArea(int side);
int main(int argc, char const *argv[])
{
    printf("Choose the shape to find the area of the shape\n");
   
   
   

    
    return 0;
}

float squareArea(int side)
{
    return side*side ;
}

float cirlcleArea(float rad)
{
    return 3.14*rad*rad;
}

float rectangleArea(float len, float brt)
{
    return len*brt;
}

