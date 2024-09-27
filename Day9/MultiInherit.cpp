#include <iostream>

using namespace std;

class student
{
protected:
    int rollNo;

public:
    void set_rollNo(int);
    void get_rollNo(void);
};

void student ::set_rollNo(int r)
{
    rollNo = r;
}

void student ::get_rollNo()
{
    cout << "The roll number is " << rollNo << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class result :public exam
{
    float percentage;
    public:
    void display();
};

void result ::display()
{
    get_rollNo();
    get_marks();
    cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
}

int main()
{
    result ab;
    ab.set_rollNo(430);
    ab.set_marks(99.9,100.0);
    ab.display();
    return 0;
}