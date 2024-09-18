#include <iostream>
    
using namespace std;

//Call by reference using ptr
void swap(int* x,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}

//Call by reference using c++ reference variable
void swap2(int &x,int &y){
    int temp =x;
    x=y;
    y=temp;
}


int main()
{
    int a=4,b=5;
    cout<<"The value of a "<<a<<"\nThe value of b "<<b<<endl;
    swap(&a,&b);//call by ref using ptr

    swap2(a,b);//call by ref using c++ ref variable
    cout<<"The value of a "<<a<<"\nThe value of b "<<b<<endl;
    
    return 0;
}