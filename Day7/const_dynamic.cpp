#include <iostream>

using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate; // interest rate will be 0.4
    float returnValue;

public:
    BankDeposit(){}

    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);

    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
    show();
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
    show();
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << "Return value after " << years << " years" << endl
         << " is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    // cout << "Enter the value of p y and r" << endl;
    // cin >> p >> y >> r;
    // bd1 = BankDeposit(p, y, r);

    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> R;
    bd1 = BankDeposit(p, y, R);

    return 0;
}