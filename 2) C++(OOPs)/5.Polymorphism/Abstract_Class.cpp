
#include <iostream>
using namespace std;

class car
{
public:
    virtual void startCar() = 0; // Pure virtual function

    virtual void stopCar() = 0;
};

class swift : public car
{
public:
    void startCar()
    {
        cout << "Swift started" << endl;
    }

    void stopCar()
    {
        cout << "Swift stopped" << endl;
    }
};

class innova : public car
{
public:
    void startCar()
    {
        cout << "Innova started" << endl;
    }

    void stopCar()
    {
        cout << "Innova stopped" << endl;
    }
};

int main()
{
    car *ptr = new innova();
    ptr->startCar();

    ptr = new swift();
    ptr->startCar();
    return (0);
}