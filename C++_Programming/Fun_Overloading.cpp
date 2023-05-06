#include<iostream>
using namespace std;

class Demo
{
    public:

        int Addition(int No1, int No2)  // Addition@2ii
        {
            cout<<"Addition of two integer"<<"\n";
            return No1 + No2;
        }

        int Addition(int No1, int No2, int No3)  // Addition@3iii
        {
            cout<<"Addition of three integer"<<"\n";
            return No1 + No2 + No3;
        }

        float Addition(float No1, float No2)    // Addition@2ff
        {
            cout<<"Addition of two float"<<"\n";
            return No1 + No2;
        }

        double Addition(double No1, double No2) // Addition@2dd
        {
            cout<<"Addition of two double"<<"\n";
            return No1 + No2;
        }
};

int main()
{
    Demo obj;
    int iRet = obj.Addition(10,11);               // Addition@2ii(&obj,10,11)
    cout<<"Addition of two int :"<<iRet<<"\n";
    
    iRet = obj.Addition(10,11,51);            // Addition@3iii(&obj,10,11,51)
    cout<<"Addition of three int :"<<iRet<<"\n";
    
    float fRet = obj.Addition(10.5f,90.7f);       // Addition@2ff(&obj,10.5f,90.7f)
    cout<<"Addition of two float :"<<fRet<<"\n";
    
    double dRet = obj.Addition(10.5,90.7);        // Addition@2dd(&obj,10.5,90.7)
    cout<<"Addition of two double :"<<dRet<<"\n";

    return 0;
} 