#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor of Demo" << endl;
    }

    ~Demo()
    {
        cout << "Destructor of Demo" << endl;
    }
};

void fun()
{
    // Demo d;    o/p : Constructor of Demo
    //                  Destructor of Demo

    Demo *p = new Demo();
    delete p;
}

int main()
{
    fun();
    return (0);
}