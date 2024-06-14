#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 0, z;
    try
    {
        if (y == 0)
        {
            throw string("Div by zero");
        }
        z = x / y;
        cout << z << endl;
    }
    catch (string e)
    {
        cout << "Division by zero " << e << endl;
    }

    cout << "Bye" << endl;
    return (0);
}