#include <iostream>
    
using namespace std;

class c2;
    
class c1{
    int value1;
    friend void exchange(c1 &,c2 &);
    public:
    void inData(int a){
        value1=a;
    }
    void printData(void){
        cout<<value1<<endl;
    }
};

class c2{
    int value2;
    friend void exchange(c1 &,c2 &);

    public:
    void inData(int b){
        value2=b;
    }
    void printData(void){
        cout<<value2<<endl;
    }
};

void exchange(c1 &x,c2 &y){
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
    
int main()
{
    c1 A;
    c2 B;
    A.inData(23);
    B.inData(65);
    cout<<"The value of A is ";
    A.printData();
    cout<<"The value of B is ";
    B.printData();
    exchange(A,B);
    cout<<"The value of A after exchange is ";
    A.printData();
    cout<<"The value of B after exchange is ";
    B.printData();

    return 0;
}