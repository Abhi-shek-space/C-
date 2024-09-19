#include <iostream>
#include <cmath>

using namespace std;

class point
{
    int x, y;
    friend void distance(point o1,point o2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void DisplayPt(void)
    {
        cout << "The point is at (" << x << "," << y << ")" << endl;
    }
};

void distance(point o1,point o2)
{
    float dist;
    dist=sqrt((pow(o2.x-o1.x,2))+(pow(o2.y-o1.y,2)));
    cout<<dist<<endl;
}

// formula for finding distance between 2 pts --> d=√((x2 – x1)² + (y2 – y1)²)

int main()
{

    point a(4, 3);
    a.DisplayPt();
    point b(0, 0);
    b.DisplayPt();
    
    distance(a,b);

    return 0;
}