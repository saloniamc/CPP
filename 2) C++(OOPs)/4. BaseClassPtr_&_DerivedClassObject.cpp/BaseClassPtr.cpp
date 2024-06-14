// Using the Base Class Ptr I can only call funtions that are in the Base Class


#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "This is Fun1" << endl;
    }
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "This is Fun2" << endl;
    }
};

int main()
{
    // Derived d;
    // d.fun1();
    // d.fun2();

    Base *p;
    p = new Derived();

    p->fun1();
    // p->fun2();

    return (0);
}