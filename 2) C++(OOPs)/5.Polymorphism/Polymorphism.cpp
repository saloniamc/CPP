// Here we are achieving runtime polymorphism
// The same mechanism in java is called as Dynamic Method Dispatch.

#include <iostream>
using namespace std;

class car
{
public:
    virtual void startCar()
    {
        cout << "Start Car" << endl;
    }

    virtual void stopCar()
    {
        cout << "Stop Car" << endl;
    }
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