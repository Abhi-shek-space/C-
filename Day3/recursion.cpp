#include <iostream>
    
using namespace std;

int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a* factorial(a-1);
}

int main()
{
    int b;
    cout<<"Enter a number"<<endl;
    cin>>b;
    cout<<"The factorial of "<<b<<" is "<<factorial(b)<<endl;
    return 0;
}