#include<stdio.h>

struct student
{
    char name[30];
    int roll;
    float marks; 
};


int main()
{
    struct student s1 = {"Rahul", 54, 78.2};
    printf(" Name:- %s\n Roll.No.:- %d\n marks:- %lf\n",s1.name,s1.roll,s1.marks);
    
    
    return 0;
}
