#include <iostream>
    
using namespace std;

class emp
{
    static int count;
    int id;
    public:
    void setData(void)
    {
        cout<<"Enter your employee Id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void)
    {
        cout<<"The Id of this employee is "<<id<<".This employee number is "<<count<<endl;
    }
    static void getCount(void)//this static member function has only access of static variable or static functions,if you try to print or access something it will throw an error.
    {
        cout<<"The value of count is "<<count<<endl;
    }

};

int emp ::count;//you can change its initial value from (0) to any other number,only outside the class,also called class variable .This variable is shared by every object in this class.

int main()
{
    emp asd,a,b;
    asd.setData();
    asd.getData();
    emp::getCount();//direct run by this command

    a.setData();
    a.getData();
    emp::getCount();
    
    b.setData();
    b.getData();
    emp::getCount();
    
    return 0;
}