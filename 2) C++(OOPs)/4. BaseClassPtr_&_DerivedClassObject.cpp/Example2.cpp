#include <iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout << "Car started" << endl;
    }
};

class AdvancedCar : public BasicCar
{
public:
    void playMusic()
    {
        cout << "Music is playing" << endl;
    }
};

int main()
{
    // BasicCar *p;
    // p = new AdvancedCar();
    // p->start();
    // p->playMusic();     NOT POSSIBLE

    AdvancedCar a;
    BasicCar *p = &a;
    p->start();

    return (0);
}