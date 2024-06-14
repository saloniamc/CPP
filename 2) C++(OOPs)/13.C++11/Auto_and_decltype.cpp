#include <iostream>
using namespace std;

float fun()
{
    return 2.3f;
}

int main()
{
    auto x = fun();
    float y = 30.6;

    decltype(y) z = 12.3;

    cout << x << " " << z;

    return (0);
}