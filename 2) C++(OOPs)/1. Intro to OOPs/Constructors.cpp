#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Default Constructor
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }

    // Parameterised Constructor
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    //Copy Constructor - Takes reference of the type Rectangle
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }

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
    // Rectangle r1;
    Rectangle r2(10, 5);
    Rectangle r3(r2);
    cout << r3.area();
}
