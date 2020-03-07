#include<iostream>

using namespace std;

class Publication
{
    protected:
        char title[20];
        float price;
    public:
        void getdata()
        {
            cout<<"Enter title:";
            cin>>title;
            cout<<"Enter the price:";
            cin>>price;
        }
        void putdata()
        {
            cout<<"Title is "<<title<<endl;
            cout<<"Price is "<<price<<endl;
        }
};

class Book:public Publication
{
    protected:
        int page_count;
    public:
        void getdata()
        {
            Publication::getdata();
            cout<<"Enter the page count:";
            cin>>page_count;
        }
        void putdata()
        {
            Publication::putdata();
            cout<<"Page count is "<<page_count<<endl;
        }
};

class Tape:public Publication
{
    protected:
        float ptime;
    public:
        void getdata()
        {
            cout<<"Enter play time:";
            cin>>ptime;
        }
        void putdata()
        {
            cout<<"Play time is "<<ptime<<endl;
        }
};

int main()
{
    Book b;
    Tape t;
    b.getdata();
    t.getdata();
    cout<<endl<<endl;
    b.putdata();
    t.putdata();
    return 0;
}