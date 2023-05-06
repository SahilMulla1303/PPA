#include<iostream>
using namespace std;

class Demo
{
    public:
        int A, B;           // Non static characteristics.
        static int X, Y;    // Static characteristics.

        Demo()              //Default constructor
        {
            // Initialisation of non static characteristics.
            A = 0;
            B = 0;
        }         
};

// Initialisation of static characteristics.
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    //Best way of static variable print
    cout<<"Value of X :"<<Demo::X<<"\n";
    cout<<"Value of Y :"<<Demo::Y<<"\n";

    Demo obj1;
    Demo obj2;

    cout<<"Value of A from obj1 :"<<obj1.A<<"\n";
    cout<<"Value of A from obj2 :"<<obj2.A<<"\n";

    obj1.A++;

    cout<<"Value of A from obj1 :"<<obj1.A<<"\n";
    cout<<"Value of A from obj2 :"<<obj2.A<<"\n";

    //worst way of static variable print
    cout<<"Value of X from obj1 :"<<obj1.X<<"\n";
    cout<<"Value of X from obj2 :"<<obj2.X<<"\n";

    cout<<"Size of Demo class object is : "<<sizeof(obj1)<<"\n";

    return 0;
}
