#include <iostream>
    
using namespace std;

class Base1
{
    int data1;
    public:
    Base1(int i)
    {
        data1=i;
        cout<<"Base1 class constructor is called."<<endl;
    }
    void printData1()
    {
        cout<<"The value of data is "<<data1<<endl;
    }
};

class Base2
{
    int data2;
    public:
    Base2(int i)
    {
        data2=i;
        cout<<"Base2 class constructor is called."<<endl;
    }
    void printData2()
    {
        cout<<"The value of data is "<<data2<<endl;
    }
};


class Derived :public Base2,public Base1//Here if you swap base 1 and 2 the out will be different
{
    int derived1,derived2;
    public:
    Derived(int a, int b,int c, int d):Base1(a),Base2(b)//if we change the position here there is no change in output
    {
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called."<<endl;
    }
    void printData3()
    {
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
        printData1();
        printData2();
    }

}; 
    
int main()
{
    Derived a(1,2,3,4);
    a.printData3();   
    return 0;
}