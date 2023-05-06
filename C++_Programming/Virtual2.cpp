#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        virtual void Fun()  // 1000
        {
            cout<<"Inside Fun of Base"<<"\n";
        }
        virtual void Gun()  // 2000
        {
            cout<<"Inside Gun of Base"<<"\n";
        }
        virtual void Sun()  // 3000
        {
            cout<<"Inside Sun of Base"<<"\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;

        void Fun()  // 4000
        {
            cout<<"Inside Fun of Derived"<<"\n";
        }
        virtual void Sun()  // 5000
        {
            cout<<"Inside Sun of Derived"<<"\n";
        }
        virtual void Run()  // 6000
        {
            cout<<"Inside Run of Derived"<<"\n";
        }
};

int main()
{
    cout<<"Size of Base "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived "<<sizeof(Derived)<<"\n";

    Base *bp = new Derived;    // Up casting   (Allowed)

    bp->Fun();  //Derived
    bp->Gun();  //Base
    bp->Sun();  //Derived
    // bp->Run();  //Error

    return 0;
}