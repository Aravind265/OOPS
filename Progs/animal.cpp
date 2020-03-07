#include<iostream>

using namespace std;
class Animal
{
    public:
        int i;
        virtual void eat()
        {
            cout<<"Generic food";
        }
};

class Cat:public Animal
{
    public:
        int j;
        void eat()
        {
            cout<<"I eat rat";
        }
};

int main()
{
    Animal *a=new Animal;
    Cat *c=new Cat;
    Animal an;
    Cat ca;
    a=c;
    a->eat();
    c->eat();
    cout<<sizeof(ca);
}
