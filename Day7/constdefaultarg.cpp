//default arguments in constructors

#include <iostream>
    
using namespace std;
    
class simple
{
    int data1,data2;
    public:
    simple(int a,int b=9)//default data is given if the user don't give that parameter then default data is shown
    {
        data1=a;
        data2=b;
        printNum();
    }
    
    void printNum();
    
};

void simple ::printNum()
{
    {
        cout << "This is your Data " << data1 << " and " << data2 << endl;
    }
}
    
int main()
{
    simple c1(5,6);
    simple c2(10);
    // complex c2(7);
    return 0;
}