#include<iostream>
#include<string.h>

using namespace std;

class myString
{
    public:
        char *str;
        int size;
        void getinput();
        void display();
        bool operator ==(myString);
        myString operator +(myString);
        void operator =(myString);
        myString operator ++(int);
        myString operator --(int);
        myString()
        {
            str=new char[10];
        }
};

void myString::getinput()
{
    cout<<"Enter the size of string:";
    cin>>size;
    this->str=new char[size];
    cout<<"Enter the string:";
    cin>>this->str;
}

void myString::display()
{
    cout<<"The string is:"<<this->str<<endl;
}

bool myString::operator ==(myString s)
{
    if(strcmp(this->str,s.str))
    {
        return false;
    }
    else
    {
        return true;
    }
}

myString myString::operator +(myString s)
{
    myString x;
    strcpy(x.str,this->str);
    strcat(x.str,s.str);
    x.size=this->size+s.size;
    return x;
}

void myString::operator =(myString s)
{
    strcpy(this->str,s.str);
    this->size=s.size;
}

myString myString::operator ++(int)
{
    int i;
    for(i=0;i<size;i++)
    {
        this->str[i]++;
    }
}

myString myString::operator --(int)
{
    int i;
    for(i=0;i<size;i++)
    {
        this->str[i]--;
    }
}

int main()
{
    myString s1,s2,s3;
    s1.getinput();  
    s2.getinput();
    if(s1==s2)
    {
        cout<<"String s1("<<s1.str<<")and String s2("<<s2.str<<")are equal"<<endl;
    }
    else
    {
        cout<<"String s1("<<s1.str<<")and String s2("<<s2.str<<")are not equal"<<endl;
    }
    s3=s1+s2;
    s3.display();
    s1++;
    s2++;
    s1.display();
    s2.display();
    return 0;
}
