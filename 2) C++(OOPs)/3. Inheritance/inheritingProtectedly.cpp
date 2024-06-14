#include <iostream>
using namespace std;

class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funParent()
    {
        a = 10;
        b = 5;
        c = 20;
    }
};

class Child : protected Parent // Child class protectedly inherits the Parent class
{
protected:
    // protected member of parent class are present here but they are invisibly inherited.

public:
    void funChild()
    {
        // a = 12;    Here a is not accesible here as it is a private member of parent class.
        b = 9; // b and c are accesible here as they are inherited in this class.
        c = 15;
    }
};

class GrandChild : public Child
{
public:
    void funGrandChild()
    {
        // a = 10;    Here a is NOT accesible here as it is private member of parent class.
        b = 5; // b and c are accesible here as they are inherited in this class.
        c = 20;
    }
};

int main()
{
    Child c;
    // c.a = 10;    Here 'a' is not accesible here as it is private member of parent class.
    // c.b = 5;     b and c too are not accesible .
    // c.c = 20;

    GrandChild b;
    // c.a = 10;     Same for this object too.
    // c.b = 5;
    // c.c = 20;
    return (0);
}