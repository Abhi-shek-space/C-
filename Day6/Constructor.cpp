/*
1.Constructor should be declared in the public class
2.It can have default arguments.
3.we cannot refer to their address.
4.It is automatically invoked whenever an object is created.

*/

#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(void);     // constructor has no return type,constructor name should be same as class name.

    complex(int, int);//parameterized constructor 
    void printNum()
    {
        cout << "This is your complex number " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // default constructor it not takes any parameter
{
    a = 10;
    b = 19;
}
complex ::complex(int x, int y) // parameterized constructor it takes 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    complex c;
    c.printNum();

    complex a(4,5);//Implicit way 
    a.printNum();

    complex b=complex(10,32);//explicit way 
    b.printNum();
    return 0;
}