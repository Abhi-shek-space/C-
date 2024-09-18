#include<iostream>

using namespace std;

typedef struct employee//takes sum of bytes to the memory location (0 bytes)
{
    int eId;//4
    char favChar;//1
    float salary;//4

} ep;

// You can use only one in union
union money//assign memory location according to the highest attribute ( 4 bytes)
{
    int rice;//4 bytes
    char car;//1 bytes
    float dollar;//4 bytes

};


int main(){
    struct employee a;
    a.eId=1;
    a.favChar='g';
    a.salary=345646;
    cout<<a.eId<<endl;
    cout<<a.favChar<<endl;
    cout<<a.salary<<endl;

    // typedef
    ep b;
    a.eId=1;
    a.favChar='g';
    a.salary=345646;
    cout<<a.eId<<endl;
    cout<<a.favChar<<endl;
    cout<<a.salary<<endl;

    union money m1;
    {
        m1.car='f';
        m1.dollar=76;
        cout<<m1.car<<endl;//gives garbage value
        cout<<m1.dollar<<endl;//gives right value 
    };
    

    return 0;
}