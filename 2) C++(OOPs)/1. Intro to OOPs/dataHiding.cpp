#include <iostream>
using namespace std;

class Rectangle
{
private:
    // private so that noone can access it from outside to set or modify it
    // Data Members
    int length;
    int breadth;

public:
    // Member Functions
    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }

    // accessor
    int getLength()
    {
        return length;
    }

    // Mutator
    void setLength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            breadth = 0;
    }
};

int main()
{
    Rectangle r1;
    r1.setLength(-10);
    r1.setBreadth(25);

    cout << r1.area();
}