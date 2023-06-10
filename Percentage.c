#include<stdio.h>

void percentage();

int main(int argc, char const *argv[])
{
    percentage();
    return 0;
}  

void percentage()
{
    printf("how many subject do you have\n");
    int num;
    scanf("%d",&num);
    char sub[num];
    printf("Enter the marks of each subject\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter the marks of subject %d \n", i+1);
        scanf("%d", &sub[i]);
    }
     int totalSub = 0;
    for (int i = 0; i < num; i++)
    {
        totalSub = sub[i]+ totalSub;
    }

    float totalPercentage = (totalSub/num);
    printf("Total marks of all the subject %d \n \n",totalSub);
    printf(" you got %.2f percentage", totalPercentage);
    
}