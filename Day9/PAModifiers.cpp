/*protected is same as private but in protected member can be inherit

Derived class visibility-->    Public Derivation      	Private Derivation          Protected Derivation
Private members           	   Not Inherited              	Not Inherited              	Not Inherited
Protected members              	Protected                   Private                      Protected
Public members           	       Public	                Private                      Protected

*/

#include <iostream>

using namespace std;

class base
{
protected:
    int a;
    int b;

public:
    int c;
    int setData(int x, int y)
    {
        a = x;
        b = y;
    }
};

class derived : base
{

};

int
main()
{

    return 0;
}