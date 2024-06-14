#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    // Accessor Functions
    int getLength() { return length; };
    int getBreadth() { return breadth; };

    // Mutator Functions
    void setLength(int l);
    void setBreadth(int b);

    // Facilitator Functions
    int area();
    int perimeter();

    // Enquiry Function
    bool isSquare();

    // Destructor Function
    ~Rectangle();
};

int main()
{
    Rectangle r1(10, 10);
    cout << "Area : " << r1.area() << endl;
    if (r1.isSquare())
    {
        cout << "Yes" << endl;
    }

    // Here at the end of the main function the destructor is automatically called
    //  and the object r1 is destroyed.
}

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}

void Rectangle::setLength(int l)
{
    length = l;
}

void Rectangle::setBreadth(int b)
{
    breadth = b;
}

int Rectangle::area()
{
    return (length * breadth);
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool Rectangle::isSquare()
{
    return length == breadth;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed";
}
