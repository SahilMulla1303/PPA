#include<stdio.h>

#include "PPA.h"

int main()
{
    struct Demo obj;

    printf("Inside main\n");    

    printf("Rate of intrest : %f\n",ROI);

    printf("Fees of logic building batch : %d\n",FEES);

    printf("Size of Demo structure : %d\n",sizeof(obj));

    return 0;
}

// 1. #include<___.h>  -> For Inbuilt header files
// 2. #include "___.h"  -> For User-define header files   