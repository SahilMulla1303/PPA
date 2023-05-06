#include<stdio.h>

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("Enter 1st number : ");
    scanf("%d",&No1);

    printf("Enter 2nd number : ");
    scanf("%d",&No2);

    Ans = No1 + No2;

    printf("Addition is : %d\n",Ans);
    
    return 0;
}