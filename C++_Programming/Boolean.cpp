#include<iostream>
using namespace std;

bool CheckEven(int No)
{
    if(No%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Value = 0;
    bool bRet = false; // bRet - Boolean Return.

    cout<<"Enter number : ";
    cin>>Value;

    bRet = CheckEven(Value);

    if(bRet == true)
    {
        cout<<"It is Even";
    }
    else
    {
        cout<<"It is odd";
    }

    return 0;
}