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
    Rectangle *p; // 2 byte ptr depends upon compiler

    p = new Rectangle; // Object is created in heap of class rectangle

    Rectangle *q = new Rectangle(); // another way of creating object **brackets can  be given or avoided

    q->length = 10;
    q->breadth = 30;

    cout << q->perimeter();
}