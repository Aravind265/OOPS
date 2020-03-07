#include<iostream>

using namespace std;

class Point
{
    public:
        int x,y;
        void getinput()
        {
            cout<<"Enter X any Y co-ordinates:";
            cin>>x>>y;
        }
        void display()
        {
            cout<<"x-coordinate:"<<x<<"y-coordinate:"<<y;
        }
};

class Rational
{
    int num,den;
    public:
        void getinput()
        {
            cout<<"Enter numerator and denominator:";
            cin>>num>>den;
        }
        void display()
        {
            cout<<"Numerator/Denominator:"<<(float)num/den;
        }
        /*void operator =(const Point &p)
        {
            num=p.x;
            den=p.y;
        }*/
};

int main()
{
    Point p;
    Rational *r;
    p.getinput();
    r=(Rational*)&p;
    r->display();
    return 0;
}
