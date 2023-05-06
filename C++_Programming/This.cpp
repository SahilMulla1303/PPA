#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;
    
        Demo(int i, int j)
        {
            No1 = i;
            No2 = j;           
        }

        void fun(int A, int B)  // void fun(Demo *this, int A, int B)
        {
            cout<<"Inside fun :"<< this->No1<<"\n";
            cout<<"Inside fun :"<< this->No2<<"\n";          
        }
        void gun(int A)    // void gun(Demo *this, int A)
        {
            cout<<"Inside fun :"<< this->No1<<"\n";
            cout<<"Inside fun :"<< this->No2<<"\n";            
        }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

    obj1.fun(10,20);   //fun(&obj1,10,20);     fun(100,10,20);
    obj2.gun(10);      //gun(&obj2,10);        gun(200,10);
  
    return 0;
} 

// Every C++ program gets internally converted into C Program.