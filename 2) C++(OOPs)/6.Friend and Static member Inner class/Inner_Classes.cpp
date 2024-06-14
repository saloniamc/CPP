#include <iostream>
using namespace std;

class Outer
{
public:
    void fun()
    {
        i.Display();
    }

    class Inner
    {
    public:
        void Display()
        {
            cout << "Display of Inner Class" << endl;
        }
    };

    Inner i;
};

int main()
{
    Outer::Inner i;

    return (0);
}

//To make inner class inaccesible from outside keep it inside private;