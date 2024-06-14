#include <iostream>
using namespace std;

class base
{
public:
    int a;
    void display()
    {
        cout << "Display of base " << a << endl;
    }
};

class derived : public base // class derived is publicly inheriting from base
                            // A derived class which is inheritng from a base class gets all the 
                            // things from a base class i.e. data members as well as member function.
{
public:
    void show()
    {
        cout << "Show of derived" << endl;
    }
};

int main()
{
    derived d;
    d.a = 100;
    d.display();
    d.show();
    return (0);
}