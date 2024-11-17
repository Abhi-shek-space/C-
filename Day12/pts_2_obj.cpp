#include <iostream>

using namespace std;

class complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;//another way to make object 
    // (*ptr).setData(23, 56);

    ptr->setData(23, 56);//Arrow operator(->)

    (*ptr).getData();

    //Array of objects(Explained this part in ---->Arr_of_ptr.cpp)
    complex *ptr1= new complex[4];

    ptr1->setData(23, 56);

    (*ptr1).getData();

    return 0;
}