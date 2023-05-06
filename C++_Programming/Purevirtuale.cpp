#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        
        //1000
        int Addition(int i, int j)                     // Concrete function
        {
            return i+j;
        }
        //2000
        virtual int Substraction(int i, int j)                 // Concrete function 
        {
            return i-j;
        }
        //3000
        virtual int Multiplication(int i, int j) = 0;    // Abstract function
};

class Derived : public Base
{
    public:
        int X,Y;

        //4000
        int Substraction(int i, int j)
        {
            int Ans = 0;
            Ans = i-j;
            return Ans;
        }
        //5000
        int Multiplication(int i, int j)
        {
            return i*j;
        }
                 
};

int main()
{
    // Base bobj;  //Error
    Base *bp = new Derived;
    int Ret = 0;

    Ret = bp->Addition(10,11);               // Base Addition
    cout<<"Addition is :"<<Ret<<"\n";        // 21

    Ret = bp->Substraction(10,11);           // Derived Substraction
    cout<<"Substraction is :"<<Ret<<"\n";    // -1
    
    Ret = bp->Multiplication(10,11);         // Derived Multiplication
    cout<<"Multiplication is :"<<Ret<<"\n";  // 110

    return 0;
}