#include<iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
        if (i==3)
        {
            break;
        }
        
    }
    for (int j = 0; j < 9; j++)
    {
        
        if (j==4)
        {
            continue;
        }
        cout<<j<<endl;
    }
    
    

    return 0;
}