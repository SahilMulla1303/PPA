#include<iostream>
using namespace std;

template <class T>
class MarvellousArray
{
    private:
        T *Arr;
        int iSize;

    public:
        MarvellousArray(int Length)
        {
            cout<<"Inside Constructor"<<"\n";
            iSize = Length;
            Arr = new T[iSize];
        }
        ~MarvellousArray()
        {
            cout<<"Inside Destructor"<<"\n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the values :"<<"\n";
            for(int i = 0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"Elements of array are :"<<"\n";
            for(int i = 0; i<iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        T Addition()
        {
            T iSum=0;
            for(int i = 0; i<iSize; i++)
            {
                iSum += Arr[i];
            }

            return iSum;
        }
};

int main()
{
    MarvellousArray <int>mobj1(6);
    MarvellousArray <float>mobj2(4);

    mobj1.Accept();
    mobj1.Display();

    mobj2.Accept();
    mobj2.Display();

    int iRet = 0;
    float fRet = 0.0f;

    iRet = mobj1.Addition();
    cout<<"Addition mobj1 :"<<iRet<<"\n";

    fRet = mobj2.Addition();
    cout<<"Addition mobj2 :"<<fRet<<"\n";

    return 0;
}