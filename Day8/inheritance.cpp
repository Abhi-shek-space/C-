/*Derived class
class {{derived-class}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc
}
visibility mode:
1.default(Private Visibility mode)-->Public members of the base class becomes private members of the derived class.
2.Public Visibility mode-->Public members of base class becomes public members of the derived class.
3.private members are never inherited
*/

#include <iostream>

using namespace std;

// base class
class employee
{

public:
    int id;
    float salary;
    
    employee(int a)
    {
        id = a;
        salary = 45.0;
    }
    employee(){}
};


class programmer :  employee
{
    public:
    programmer(int inpId)
    {
        id=inpId;
        cout<<id;
    }
    
};

int main()
{
    employee h1(1),h2(2);
    cout<<h1.salary<<endl;
    cout<<h2.salary<<endl;

    programmer p1(34);

    return 0;
}