#include<iostream>

using namespace std;

int main()
{
    int a;
    int i=1;
    cout<<"Enter the number which table you want to print"<<endl;
    cin>>a;
    do
    {
        
        cout<<a <<" X "<< i<<" = "<<a*i<<endl;
        i++;
    } while (i<11);
    
    return 0;
}
