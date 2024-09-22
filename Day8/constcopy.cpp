

#include <iostream>

using namespace std;

class number
{
    int a;

public:
    number() {
        a=0;
    }
    number(int num)
    {
        a = num;
        display();
    }

    number(number &obj)
    {
        //When no copy constructor is found,compiler supplies its own copy constructor
        cout<<"Copy constructor invokes!!"<<endl;
        a = obj.a;
        display();
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x(30), y, z,z2;
    y.display();
    z.display();
    // z1 should exactly resemble z
    number z1(x);//copy constructor invokes

    z2 = z;//compiler's own copy constructor invokes
    z2.display();
    
    number z3=z;//copy constructor invokes
    return 0;
}