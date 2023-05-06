#include<stdio.h>

int addition(int A, int B)
{
    int Result = 0;

    Result = A + B;
    
    return Result;
}

int main()
{
    int No1 = 10;
    int No2 = 11;
    int Ans = 0;

    Ans = addition(No1,No2);

    printf("Ans is :%d",Ans);

    return 0;
}