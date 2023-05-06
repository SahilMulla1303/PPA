#include<stdio.h>

int main()
{
    int No1 = 10;
    int No2 = 20;
    int No3 = 30;
    int No4 = 40;
    int No5 = 50;

    int Arr[5] = {10,20,30,40,50};   
    printf("%d",Arr);
    printf("%d",&Arr[1]);


    int Arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //Arr1 is 2 diamentional array 
    //which contain 3 one diamentional array
    //each one diamentional array contains 4 element
    //and each element is of type integer


    return 0;
}