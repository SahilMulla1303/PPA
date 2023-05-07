#include<stdio.h>
#include<stdlib.h>

// main function prototype in c & c++ 
// int main(int argc, char *argv[], int *envp)
//*envp : envinment pointer

int main(int argc, char *argv[])
{
    printf("Demonstration of command line\n");

    int No1 = atoi(argv[1]);
    int No2 = atoi(argv[2]);

    int Ans = No1 + No2;

    printf("Number of command line argument :%d\n",argc);

    printf("Additin is : %d\n", Ans);

    return 0;
}

// gcc CommandLine.c -o Myexe
// Myexe 11 21