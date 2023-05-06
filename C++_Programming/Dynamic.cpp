#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int Arr[5];   // Static memory allocation.

    int *p = NULL;
    p = (int *)malloc(sizeof(int) * 5);   //Dynamic allocation using malloc

    int *q = NULL;
    q = (int *)calloc(sizeof(int) , 5);   //Dynamic allocation using calloc

    int *x = NULL;
    x = new int[5];

    free(p);
    free(q);

    delete [] x;
    
    return 0;
}
