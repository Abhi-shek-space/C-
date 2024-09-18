#include <iostream>

using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122; // as default
        cout << "Enter your employee Id" << endl;
        cin >> id;
        cout<<salary<<endl;;
    }
    void getId(void)
    {
        cout << "The Id of this employee is " << id << endl;
    }
};

int
main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}