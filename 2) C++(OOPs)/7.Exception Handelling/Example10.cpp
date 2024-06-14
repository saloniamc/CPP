#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 1.5;
    }
    catch (int e)
    {
        cout << "Int Catch" << endl;
    }
    catch (double e)
    {
        cout << "Double Catch" << endl;
    }
    catch (...) // Cathch-All Handler
                // instead of elipses we can write - char e or anything it will cathch anything
                // means you're not interested in the cause of the exception.
    {
        cout << "All Catch" << endl;
    }

    return (0);
}