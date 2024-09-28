#include <iostream>
    
using namespace std;
    
class base1
{
    public:
    void greet()
    {
        cout <<"Kaise ho"<<endl;
    }
};

class base2
{
    public:
    void greet()
    {
        cout <<"Hello dude"<<endl;
    }
};

class derived :public base1 ,public base2
{
    int a;
    public:
    void greet()//if base1::greet() was not declared in derived class then it shows error.
    {
        base1::greet();//and there is another greet() like 'welcome' so it override base1 and base2 greet()
    }
};
    
int main()
{
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();

    derived obj3;
    obj3.greet();
    return 0;
}