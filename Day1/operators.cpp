#include <iostream>
    
using namespace std;
int main()
{
    int a;
    int b=54;
    cout<<"Enter the value of a ";//(<<)insertion operator
    cin>>a;//this is extraction operator
    cout<<"The value of a is "<<a<<endl;//(<<)insertion operator
    
    float d=34.4l;
    cout<<"The size of 3.4 is "<<sizeof(3.4)<<endl;//compiler read as a double 
    cout<<"The size of 3.4 is "<<sizeof(3.4f)<<endl;//read as float
    cout<<"The size of 3.4 is "<<sizeof(3.4l)<<endl;//read as long double


    

    return 0;
}