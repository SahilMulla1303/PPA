#include<iostream>
using namespace std;

const int A = 10;

int main()
{
    const int B = 20;

    const int Arr[4] = {10,20,30,40};
/*
    Error Genrate
    
    A= 11;
    A++;
    B++;
    B--;
    Arr[2]=21;
    Arr[3]++;
*/

    return 0;
}