/*Functions and function prototype*/

// int a and int b are formal parameters
// n1 and n2 are actual parameters

#include <iostream>

using namespace std;

// function prototype

//int add(int,int)--->acceptable
int add(int a ,int b);//---->acceptable
//int add(int a,b);---->Not acceptable

void g(void);
//void g(); also acceptable

int main()
{
    int n1, n2;
    cout << "Enter first number" << endl;
    cin >> n1;
    cout << "Enter second number" << endl;
    cin >> n2;
    cout << "The sum is " << n1 << " and " << n2 << " is " << add(n1, n2) << endl;
    g();
    return 0;
}
//functions
int add(int a, int b)
{
    int c = a + b;
    return c;
}

void g(){
    cout<<"\nHello bro"<<endl;
}