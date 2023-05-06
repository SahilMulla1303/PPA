#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int A;
            int B;
            // Parameterised constructor with default arguments.
            Demo(int i = 10, int j = 20)
            {
                A = i;
                B = j;
            }
    };
} // namespace Marvellous

namespace Infosystem
{
    class Demo
    {
        public:
            int A;
    };
}

// using namespace Marvellous;

int main()
{
    Marvellous::Demo obj1;

    Infosystem::Demo obj2;

    cout<<"Inside main 1\n";
    std::cout<<"Inside main 2\n";

    return 0;
}