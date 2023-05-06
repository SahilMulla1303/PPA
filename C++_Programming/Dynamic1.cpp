#include<iostream>
using namespace std;

class Demo
{
    public:
        int A, B;
        
        Demo()
        {
            cout<<"Inside default constructor"<<"\n";
        }
        Demo(int x, int y)
        {
            cout<<"Inside parameterised constructor"<<"\n";
        }
        ~Demo()
        {
            cout<<"Inside dealocator"<<"\n";
        }
};
int main()
{    
    Demo obj1;  // Static memory allocation of object.
    Demo obj2(11,21);  // Static memory allocation of object.

    Demo *p = new Demo();   //Dynamic memory allocation of object.
    Demo *q = new Demo(11,21);   //Dynamic memory allocation of object.

    delete p;
    delete q;

    cout<<"End of main"<<"\n";
    
    return 0;
}
