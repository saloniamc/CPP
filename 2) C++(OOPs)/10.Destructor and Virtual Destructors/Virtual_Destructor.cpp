#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Constructor of Base" << endl;
    }
    virtual ~Base()            // Using virtual keyword to call derived class's destructor too
    {
        cout << "Destructor of Base" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor of Derived" << endl;
    }
    ~Derived()
    {
        cout << "Destructor of Derived" << endl;
    }
};

void fun()
{
   // Derived d;                        Constructor of Base
   //                                   Constructor of Derived
   //                                   Destructor of Derived
   //                                   Destructor of Base


   Base *ptr = new Derived();     //   Constructor of Base         0
                                  //   Constructor of Derived

   delete ptr;                    //   Constructor of Base
                                  //   Constructor of Derived
                                  //   Destructor of Base     


//  After using virtual keyword for base class's detructor

    //     Constructor of Base
    //     Constructor of Derived
    //     Destructor of Derived
    //     Destructor of Base

}

int main()
{
    fun();
    return (0);
}