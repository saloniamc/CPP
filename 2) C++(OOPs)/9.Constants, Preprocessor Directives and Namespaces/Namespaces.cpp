#include <iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout << "First ";
    }
}

namespace Second
{
    void fun()
    {
        cout << "Second ";
    }
}


using namespace Second;
int main()
{
    fun();
    First::fun();
    return (0);
}