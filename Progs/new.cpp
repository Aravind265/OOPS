#include<iostream>

using namespace std;

class Number
{
    int x;
    public:
        void display() const
        {
            cout<<increment();
            cout<<x;
        }
        int increment()
        {
            x++;
        }
        Number()
        {
            x=10;
        }
};

int main()
{
    Number n;
    n.display();
    return 0;
}
