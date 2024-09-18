#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
        printNum();
    }
    
    friend complex sumCom(complex x1,complex x2);//assign permission to access private members.also declared in private as well as public section.

    void printNum()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
//contains objects as arguments.
complex sumCom(complex x1,complex x2)//only have permission to access private members.Not in scope of the class,it can't be called from object of the class.
{
    complex x3;
    x3.setNum((x1.a+x2.a),(x1.b+x2.b));
    return x3;
}

int main()
{
    complex c1,c2,sum;
    c1.setNum(1,2);
    c2.setNum(4,5);
    sum= sumCom(c1,c2);
    return 0;
}