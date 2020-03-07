#include<iostream>

using namespace std;

class Point
{
    private:
        int x,y;
    public:
        friend istream& operator >>(istream&,Point&);
        friend ostream& operator <<(ostream&,const Point&);
};

istream& operator >>(istream &in,Point &p)
{
    //in.ignore();
    in>>p.x;
    in>>p.y;
    return in;
}

ostream& operator <<(ostream &out,const Point &p)
{
    out<<"("<<p.x<<","<<p.y<<")";
    return out;
}

int main()
{
    Point p;
    cout<<"Enter a point:";
    cin>>p;
    cout<<endl;
    cout<<"The point you have entered is:"<<p;
    return 0;
}
