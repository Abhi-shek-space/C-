 //pointers are data type which stores address of other data types
 #include <iostream>
    
 using namespace std;
 int main()
 {
    int a=30;
    int* b;
    b=&a;
    int** c=&b;  

    //&---(address of) operator
    cout<<"address of a is "<<b<<endl;
    cout<<"address of a is "<<&a<<endl;

    // *----Dereference operator
    cout<<"The value at a is "<<*b<<endl;
    cout<<"The value at a is "<<a<<endl;

    cout<<"address of b is "<<c<<endl;
    cout<<"address of b is "<<&b<<endl;


    return 0;
 }