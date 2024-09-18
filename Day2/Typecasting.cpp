//Reference variable

#include <iostream>
    
using namespace std;
int main()
{
    float a=343;
    float &b=a;
    cout<<a<<endl;
    cout<<b<<endl;

    //typecasting

    int x=34;
    float y=34.5;
    cout<<"value of x "<<(float)x<<endl;
    cout<<"value of x "<<float(x)<<endl;
    cout<<"value of y "<<int(y)<<endl;

    int z=int(y);
    cout<<"the expression is "<<x+y<<endl;
    cout<<"the expression is "<<(float)x+int(y)<<endl;
    cout<<"the expression is "<<x+(int)y<<endl;

    return 0;
}