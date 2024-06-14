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

class Child : public Parent // Child class publicly inherits the Parent class
{
public:
    void funChild()
    {
        // a = 12;    Here a is not accesible here as it is a private member of parent class.
        b = 9;     // b and c are accesible here.
        c = 15;   
    }
};

class GrandChild : public Child
{
public:
    void funGrandChild()
    {
        // a = 10;    Here a is NOT accesible here as it is private member of parent class.
        b = 5;     // b and c are accesible here
        c = 20;    
    }
};

int main()
{
    GrandChild c;
   // c.a = 10;    Here 'a' is not accesible here as it is private member of parent class.
   // c.b = 5;     b too is not accesible as it is protected member of Parent class.
    c.c = 20;
    return (0);
}