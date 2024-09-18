#include <iostream>
    
using namespace std;

//default argument only in right side after user given arguments
float bank(int m,float ao=1.04)//Default ao value if ao value not given by user so compiler will use default value
{
    return m*ao;
}

//constant argument
// int strlen(const int p){//const int p argument can't be change inside the function

// }

int main()
{
    int money=100000;
    cout<<"If you have Rs "<<money<<" in your account ,you will get Rs "<<bank(money)<<" after 1 year"<<endl;
    cout<<"For VIP: If you have Rs "<<money<<" in your account ,you will get Rs "<<bank(money,1.1)<<" after 1 year"<<endl;
    return 0;
}