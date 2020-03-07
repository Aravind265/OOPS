#include<iostream>
using namespace std;
class Point
{
    private:
        int x,y;
    public:
        Point(int a,int b)
        {
            x=a;
            y=b;
        }
        Point(Point &m)
        {
            x=m.x;
            y=m.y;
        }
        int getx()
        {
            return x;
        }
        int gety()
        {
            return y;
        }
};
int main()
{
    Point p1(5,6);
    Point p2=p1;
    cout<<p1.getx()<<" "<<p1.gety();
    cout<<endl;
    cout<<p2.getx()<<" "<<p2.gety();
}
