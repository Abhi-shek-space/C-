#include<iostream>
#include<iomanip>//setw use for width ,setw is a manipulator

using namespace std;

int main(){
   //constant in c++
   //const int a=4564;//cannot be change
   //cout<<a;

    int a=34,b=456,c=3456;
    cout<<"The value of a :"<<a<<endl;//endl is also a manipulator
    cout<<"The value of b :"<<b<<endl;
    cout<<"The value of c :"<<c<<endl;

    cout<<"The value of a :"<<setw(7)<<a<<endl;//setw is a manipulator
    cout<<"The value of b :"<<setw(7)<<b<<endl;
    cout<<"The value of c :"<<setw(7)<<c<<endl;

    
    return 0;
}

