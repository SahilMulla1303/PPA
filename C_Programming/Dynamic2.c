#include<stdio.h>
#include<stdlib.h>  //malloc,calloc,realloc in stdlib.h

int main()
{
    int Arr[10];  //Static memory allocation

    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    // Step1 : Allocation the memory.
    ptr = (int *)calloc(sizeof(int) , size);  //calloc - Calculated allocation.

    // Step 2 : Use the memory(In logic building batch).

    // Step 3: Deallocation the memory.
    free(ptr);
    
    return 0;
}