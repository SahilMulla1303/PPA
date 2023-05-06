#include<iostream>
using namespace std;

class Demo
{
    public:
        void Fun()
        {
            cout<<"Inside Fun"<<"\n";
        }
        void Gun()
        {
            cout<<"Inside Gun"<<"\n";
        }
};

int main()
{
    Demo obj;
    obj.Fun(); // CALL 1000
    obj.Gun(); // CALL 2000

    cout<<"Size of empty class object : "<<sizeof(obj);

    return 0;
}