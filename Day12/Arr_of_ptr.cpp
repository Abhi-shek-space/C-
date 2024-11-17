#include <iostream>

using namespace std;

class shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    /*
    0  1  2
    ^
    |
    |
    ptr  ptr moves in first 'for' loop.
    ptrTemp
    */
    shop *ptr = new shop[size];     
    shop *ptrTemp= ptr;                  
    int x,i;
    float y;
    
    //I have to set items and price for my shop 
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and Price of item "<<i+1<<endl;;
        cin>>x>>y;
        ptr->setData(x,y);
        ptr++;
    }
    
    for (i = 0; i < size; i++)
    {
        cout<<"Item number : "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}