#include <iostream>
using namespace std;

int main()
{
    int x = 9, y = 1, z;

    try
    {
        if (y == 0)
        {
            throw 1;
        }
        z = x / y;
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Disvision by zero " << e << endl;
    }
    cout << "Bye" << endl; // executes irrespective of presence of error
    return (0);
}