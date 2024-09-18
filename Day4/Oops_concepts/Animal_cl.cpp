#include <iostream>

using namespace std;

class Animal
{
    private:
        int legs, tail, eyes;

    public:
        int sound, speed;
        void setData(int legs, int tail, int eyes);
        void getData()
        {
            cout << "This animal have " << legs << " legs." << endl;
            cout << "This animal have " << tail << " tail." << endl;
            cout << "This animal have " << eyes << " eyes." << endl;
            cout << "This animal have " << sound << " sound." << endl;
            cout << "This animal have " << speed << " speed." << endl;
        }
};

void Animal ::setData(int a, int b, int c)
{
    legs = a;
    tail = b;
    eyes = c;
}

int main()
{
    Animal crocodile;
    crocodile.sound = 0;
    crocodile.speed = 5;
    crocodile.setData(4, 1, 2);
    crocodile.getData();
    return 0;
}