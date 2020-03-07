#include<iostream>
using namespace std;
class Point
{
    public:
    int x_co,y_co;
    void read();
    void set();
    bool isOrigin();
    void display();
    Point diff(Point);
};
void Point::set()
{
    x_co=0;
    y_co=0;
}
bool Point::isOrigin()
{
    if((x_co==0)&&(y_co==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Point::display()
{
    cout<<"\n"<<x_co<<" "<<y_co;
}
Point Point::diff(Point x)
{
    Point p;
    p.x_co=x.x_co-x_co;
    p.y_co=x.y_co-y_co;
    return p;
}
void Point::read()
{
    cout<<"\nX co-ordinate";
    cin>>x_co;
    cout<<"\nY co-ordinate";
    cin>>y_co;
}
int main()
{
    Point p1,p2;
    p1.set();
    cout<<p1.isOrigin();
    p1.display();
    p2.read();
    p2.display();
    Point p3=p1.diff(p2);
    return 0;
}
