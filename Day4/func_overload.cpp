//function overloading
//same function name with different arguments

#include <iostream>
    
using namespace std;

int volume(int l,int b,int h)
{
    return (l*b*h);
}

int volume(int a)
{
    return (a*a*a);
}

int main()
{
    cout<<"The volume of cube of side 4 is "<<volume(4)<<endl;
    cout<<"The volume of cuboid of length 4 ,breath 5 and height 6 is "<<volume(4,5,6)<<endl;
    
    return 0;
}