#include <iostream>
using namespace std;

class Rectangle
{
public:
    // Data Members
    int length;
    int breadth;

    // Member Functions
    int area()
    {
        return length * length;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;
    Rectangle *p;
    p = &r1;
    p->length = 10;
    p->breadth = 20;

    cout << p->perimeter();
}
