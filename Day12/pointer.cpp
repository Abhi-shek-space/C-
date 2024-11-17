#include <iostream>

using namespace std;

int main()
{
    // Pointer
    int a = 56;
    int *ptr = &a;
    cout << "The value of a is : " << *(ptr) << endl;

    // New operator
    int *p = new int(67);
    cout << "The value at address p is : " << *(p) << endl;

    // New operator(Array)
    int *arr = new int[4];
    *arr = 45;
    arr[1] = 456;
    *(arr + 2) = 54;
    arr[3] = 452;

    // Delete new operator(float,int,array)
    //  delete[] arr;
    
    cout << "The value of arr[0] is : " << arr[0] << endl;
    cout << "The value of arr[1] is : " << arr[1] << endl;
    cout << "The value of arr[2] is : " << arr[2] << endl;
    cout << "The value of arr[3] is : " << arr[3] << endl;

    return 0;
}