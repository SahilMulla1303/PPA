#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int *p = &(Arr[1]);
    int *q = &(Arr[3]);

    printf("%d",q-p);    

    return 0;
}