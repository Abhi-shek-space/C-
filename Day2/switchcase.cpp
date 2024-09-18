
#include <iostream>
    
using namespace std;
int main()
{
    int age;
    cout<<"Enter age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"hello welcome"<<endl;
        // break;
    case 22:
        cout<<"Congratulates you are 22 years old"<<endl;
        // break;
    
    default:
        cout<<"never mind"<<endl;
        // break;
    }
    return 0;
}