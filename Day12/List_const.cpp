#include <iostream>

using namespace std;

/*
syntax for initialization list in constructor:
constructor (Argument-list) : initialization-section
{
    assignment +other code
}

Ex-
Class test
{

    int a;
    int b;
    public:
        test(int i,int j) : a(i), b(j){Constructor-body}

}
*/

class test
{
    int a;
    int b;

public:
    // test(int i, int j) :  b(j), a(i+b)// gives garbage value in a because "a" initialized first then "b".
    test(int i, int j) : a(i), b(i + j)//this syntax is used in complex constructors.
    {
        // a=i;we can initialize in this order too if constructor is not complex
        // b=j;
        cout << "Hello bro! " << endl;
        cout << "Value of a : " << a << endl;
        cout << "Value of b : " << b << endl;
    }
};

int main()
{
    test z(3, 5);

    return 0;
}