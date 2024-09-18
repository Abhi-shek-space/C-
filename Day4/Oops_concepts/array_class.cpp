#include <iostream>

using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    { 
        counter = 0; 
    }
    void setPrice();
    void displayPrice();
};
void shop ::setPrice()
{
    cout << "Enter Id of your item no " << counter+1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    int a;
    cout<<"How many numbers of item you want to fetch"<<endl;
    cin>>a;
    shop dukkan;
    dukkan.initCounter();
    for (int i = 0; i < a; i++)
    {
        dukkan.setPrice();
    }
    dukkan.displayPrice();

    return 0;
}