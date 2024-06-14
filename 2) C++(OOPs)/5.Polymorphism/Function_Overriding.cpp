#include <iostream>
using namespace std;

class Base
{
public:
    void Display()
    {
        cout << "Display of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void Display(int x)
    {
        cout << "Display of Derived" << endl;
    }
};

int main()
{
    // Using Base Class Object

    // Base b;
    // b.Display();           // DISPLAY OF BASE

    // Using Derived Class Object
    Derived d;
   // d.Display();            error: no matching function for call to 'Derived::Display()'
   //                         candidate expects 1 argument, 0 provided
   //                          the Display function is overrided in Derived class so if you need to use the 
   //                          Display function of Base , inherted by derived class write it as below
   
   d.Base::Display();        // OUTPUT: Display of Base

   //To display the Display function of Derived Class pass an argument as below

   d.Display(7);

    return (0);
}