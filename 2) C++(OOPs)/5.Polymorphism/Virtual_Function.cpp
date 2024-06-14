#include <iostream>
using namespace std;

class BasicCar
{
public:
    virtual void fun()
    {
        cout << "BasicCar Started" << endl;
    }
};

class AdvancedCar : public BasicCar
{
public:
    void fun()
    {
        cout << "AdvancedCar Started" << endl;
    }
};

int main()
{
    AdvancedCar a;
    BasicCar *ptr = &a;
    ptr->fun();

    return (0);
}