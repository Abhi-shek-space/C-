#include <iostream>
    
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You are not eligible for drivers license"<<endl;
    }
    else if(age==18){
        cout<<"You are eligible for drivers license"<<endl;
    }
    else if (age<1)
    {
        cout<<"Enter an valid age"<<endl;
    }
    
    else{
        cout<<"You are eligible for drivers license"<<endl;
    }

    return 0;
}