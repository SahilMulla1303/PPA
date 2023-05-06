#include<stdio.h>

int A = 10;

extern int B;   // B is a intiger which is outside

extern int C;   // C is a intiger which is outside 

int main()
{
    printf("value of A %d\n",A);

    printf("value of B %d\n",B);

    printf("value of C %d\n",C);

    return 0;
}

//gcc extern_demo.c extern.c -o Myexe