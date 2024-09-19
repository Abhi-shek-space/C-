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
    int a,b;
    public:
    complex(void);//constructor has no return type,constructor name should be same as class name.
    void printNum()
    {
        cout<<"This is your complex number "<<a<<" + "<<b<<"i"<<endl;
    }

};

complex :: complex (void)//default constructor it not takes any parameter
{
    a=10;
    b=19;
    
}
    
int main()
{
    complex c;
    c.printNum();
    return 0;
}