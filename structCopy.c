#include<stdio.h>
struct student{
    char name[30];
    int age;
    int roll ;

};

int main(int argc, char const *argv[])
{
    struct student s1{"Rahul", 20 , 70};
    struct student s2 ;
    s2 = s1 ;
    printf("Name:- %s\n Age:- %d\n Roll.No:- %d",s2.name, s2.age, s2.roll );
    return 0;
}
