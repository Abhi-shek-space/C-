#include <iostream>

using namespace std;

class Base
{
    int d1;

public:
    int d2;
    void setData();
    int get1();
    int get2();
};

void Base ::setData()
{
    d1 = 10;
    d2 = 20;
}

int Base ::get1()
{
    return d1;
}

int Base ::get2()
{
    return d2;
}

class Derived :public Base
{
    int d3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    // setData();//if Base class's visibility is private
    d3 = d2 * get1();
}

void Derived ::display()
{
    cout<<"Value of data 1 is "<<get1()<<endl;
    cout<<"Value of data 2 is "<<d2<<endl;
    cout<<"Value of data 3 is "<<d3<<endl;
}

int main()
{
    Derived a;
    a.setData();
    a.process();
    a.display();
    return 0;
}