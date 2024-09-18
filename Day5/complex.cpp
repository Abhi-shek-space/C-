#include <iostream>

using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
        printNum();
    }
    void setDataBySum(complex x1, complex x2)
    {
        a = x1.a + x2.a;
        b = x1.b + x2.b;
        printNum();
    }
    void printNum()
    {
        cout<<"This is your complex number "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(3,4);

    c3.setDataBySum(c1,c2);

    return 0;
}