#include<stdio.h>
#include<stdlib.h>  //malloc,calloc,realloc in stdlib.h

int main()
{
    int *ptr = NULL;

    // Step1 : Allocation the memory.
    ptr = (int *)malloc(sizeof(int) * 5); //20 Byte  //malloc - Memory allocation.

    // Step 2 : Use the memory(In logic building batch).

    
    ptr = (int *)realloc(ptr, sizeof(int) * 7); //28 Byte //realloc - Re Allocation.
    // ptr = (int *)realloc(ptr, sizeof(int) * 3); //12 Byte

    // Step 3: Deallocation the memory.
    free(ptr);
    
    return 0;
}