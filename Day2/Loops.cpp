/* There are 3 types of loops :
1.For loop
2.While loop
3.Do-while loop
 */
#include <iostream>
    
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++)
    {
    cout<<i<<endl;
    
    }
    cout<<endl;
    int i=1;
    while (i<=10)
    {
        cout<<i<<endl;
        i++;   
    }
    cout<<endl;
    do
    {
        cout<<i<<endl;
        i++;
    } while (false);
    
    
    return 0;
}