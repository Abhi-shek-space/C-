#include <iostream>
    
using namespace std;
int main()
{
    int marks[5]={34,56,77,56,34};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<marks[i]<<endl;
    }
    cout<<endl;

    int i=0;
    while (i<5)
    {
        cout<<marks[i]<<endl;
        i++;
    }
    cout<<endl;

    int j=0;
    do
    {
        cout<<marks[j]<<endl;
        j++;
    } while (j<5);

    // ptr and array
    int mark[4]={23,45,67,87};
    int* p=mark;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    
    
    
    return 0;
}