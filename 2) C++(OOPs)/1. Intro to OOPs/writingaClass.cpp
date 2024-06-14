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
    // Creating 2 Object of class Rectangle
    Rectangle r1, r2; // r1 an r2 are variables of datatype Rectangle , so rectangle class
                      // is used to define our own datatype , i.e user defined datatype

    r1.length = 10;
    r1.breadth = 20;

    cout << r1.area();
}
