#include<iostream>

using namespace std;

class Base
{
    protected:
        int i;
        Base()
        {
            i=5;
        }
        void disp()
        {
            cout<<i;
        }
};

class Derived:protected Base
{
    public:
        Base::i;
        int j;
        Derived()
        {
            j=5;
        }
        void disp()
        {
            Base::disp();
            cout<<j;
        }
};

int main()
{
    Derived d;
    cout<<d.i;
    d.disp();
}