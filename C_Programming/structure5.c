#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

int main()
{
    //Arr is one diamentional array which contains 4 elements and each element is of type struct Demo.
    //Where Demo is a structure which contains 2 members one as interger and other is float.
    struct Demo Arr[4];

    Arr[0].i = 11;
    Arr[0].f = 90.0;

    Arr[1].i = 21;
    Arr[1].f = 95.0;

    Arr[2].i = 31;
    Arr[2].f = 97.0;

    Arr[3].i = 41;
    Arr[3].f = 99.0;

    return 0;
}