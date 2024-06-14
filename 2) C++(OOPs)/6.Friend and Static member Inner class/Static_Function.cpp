#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;

    Test()
    {
        a = 10;
        count++;
    }

    static int getCount()
    {
        // a = 10; invalid use of member 'Test::a' in static member function a = 10; Static function
        //         can only access static data members
        return count;
    }
};

int Test::count = 0;

int main()
{
    Test t1, t2;

    cout << Test::getCount() << endl;  //Static functions cnn be called upon a class
    // i.e you can access static functions without creating an object                     

    cout << t1.getCount()<<endl;     // as well as using object
    return (0);
}