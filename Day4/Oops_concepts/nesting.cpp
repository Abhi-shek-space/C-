#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;//by default its private member
    void chk_bin();//private member only used by class methods only.
public:
    void read();
    void onces();
    void display();
};

void binary ::read()
{
    cout << "Enter a binary number." << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not a binary number" << endl;
            exit(0);
        }
    }
}

void binary ::onces()
{
    chk_bin();//nested of member function
    cout<<"\nafter onces compliment"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.display();
    b.onces();
    b.display();
    return 0;
}