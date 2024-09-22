//constructor overloading same name different parameter
//invokes according to the given parameters.


#include <iostream>
    
using namespace std;
    
class complex
{
    int a,b;
    public:
    complex(int x,int y)
    {
        a=x;
        b=y;
        printNum();
    }
    complex(int x)
    {
        a=x;
        b=0;
        printNum();
    }
    void printNum()
    {
        cout << "This is your complex number " << a << " + " << b << "i" << endl;
    }
};
    
int main()
{
    complex c1(5,6);
    complex c2(7);
    return 0;
}