#include<iostream>

using namespace std;

class Point
{
    public:
            int x,y;
            friend void operator -(Point&);
            void disp()
            {
                cout<<x<<" "<<y;
            }
};

void operator -(Point &q)
{
    q.x=-q.x;
    q.y=-q.y;
}

int main()
{
    Point p;
    p.x=5;
    p.y=6;
    -p;
    p.disp();
    return 0;
}
