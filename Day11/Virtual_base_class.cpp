/*Virtual base class 
class A has a member 'int a' and class B and C inherits class A
therefore they have access to 'int a' so if we make another Class D which inherits class B and C
So there a problem occurs(ambiguity) which is Class D have access to two 'int a' of class B and C.
To resolve this problem we have virtual base class A which ensures it carries one copy of 'int a'(data member) .
*/
#include <iostream>
    
using namespace std;
    
class student
{
    protected:
    int Roll_no;
    public:
    void setNum(int a)
    {
        Roll_no=a;
    }
    void printNum()
    {
        cout<<"Your roll number is "<<Roll_no<<endl;
    }
};

class test :virtual public student
{
    protected:
    float maths,physics;
    public:
    void setMarks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
    void printMarks()
    {
        cout<<"Your result is here: "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
    }

};

class sports: virtual public student
{
    protected:
    float score;
    public:
    void setScore(float sc)
    {
        score=sc;
    }
    void printScore()
    {
        cout<<"Your PT score is: "<<score<<endl;
    }
};

class result:public test, public sports
{
    float total;
    public:
    void display()
    {
        total= maths+physics+score;
        printNum();
        printMarks();
        printScore();
        cout<<"Your total score is: "<<total<<endl;
    }   
};
    
int main()
{
    result a;
    a.setNum(34);
    a.setMarks(98.9,78.9);
    a.setScore(78);
    a.display();

    return 0;
}