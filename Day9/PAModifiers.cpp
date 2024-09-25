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

private:
    int b;

};

class derived : public base
{

    
};

int main()
{
    
    return 0;
}