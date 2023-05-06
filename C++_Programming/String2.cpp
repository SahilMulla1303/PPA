#include<iostream>
using namespace std;

int strLenX(char *str)  // int strLenX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    cout<<"Enter First Name : ";
    cin>>Arr;

    iRet = strLenX(Arr);

    cout<<"Len of name : "<<iRet<<"\n";

    return 0;
}