#include <iostream>
    
using namespace std;

class y;
    
class x{
    int data;
    public:
    void setValue(int v){
        data=v;
    }
    friend void add(x,y);
};

class y{
    int num;
    public:
    void setValue(int v){
        num=v;
    }
    friend void add(x,y);

};

void add(x o1,y o2){
    cout<<"adding data of x and y objects gives me "<<o1.data+o2.num<<endl;
}
 
int main()
{
    x a;
    y b;
    b.setValue(5);
    a.setValue(7);
    add(a,b);
    return 0;
}