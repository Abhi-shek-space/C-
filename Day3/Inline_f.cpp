#include <iostream>
    
using namespace std;

inline int pro(int a, int b)//inline f() can be useful in smaller function to decrease time in compilation by swapping the whole f() in main f() 
{
    return a+b;
}

int stat(int a,int b)
{
    static int c=0;//static variable which executes only one time but holds value of the variable every time it runs
    c++;
    return a+b+c;
}

int main()
{
    int a,b;
    a=34;
    b=23;
    cout<<pro(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    return 0;
}