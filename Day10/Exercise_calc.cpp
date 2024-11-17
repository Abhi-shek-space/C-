// I am using multiple inheritance
// I am using protected and public visibility modes
//

#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator
{
protected:
    int a;
    int b;

public:
    SimpleCalculator(int x, int y)
    {
        a = x;
        b = y;
    }
    void Display()
    {
        cout<<"Simple Calculator Calculations"<<endl;
        cout << "The addition of " << a << " and " << b << " is " << a + b << endl;
        cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
        cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
        cout << "The division of " << a << " and " << b << " is " << a / b << endl;
    }
};

class ScientificCalculator
{
protected:
    int a, b;

public:
    ScientificCalculator(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<endl;
        cout<<"Scientific Calculator Calculations"<<endl;
        cout << "The sine of (" << a << " + " << b << ") is " << sin(a + b) << endl;
        cout << "The cosine of (" << a << " + " << b << ") is " << cos(a + b) << endl;
        cout << "The tangent of (" << a << " + " << b << ") is " << tan(a + b) << endl;
        cout << a << " raised to the power " << b << " is " << pow(a, b) << endl;
    }
};

class hybridCalculator : public SimpleCalculator, public ScientificCalculator
{
protected:
    int a, b;

public:
    hybridCalculator(int x, int y) : SimpleCalculator(x, y), ScientificCalculator(x, y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        Display();
        display();
    }
};

int main()
{
    int x,y;
    cout << "Enter the 1st number " << endl;
    cin >> x;
    cout << "Enter the 2nd number " << endl;
    cin >> y;
    hybridCalculator calc(x, y);
    calc.show();
    return 0;
}