#include <iostream>
using namespace std;

template<typename T>
void fun(T p)
{
    p();
}

int main()
{
    [](){ cout << "Hello" << endl; }();

    [](int x, int y){ cout << x << " " << y << endl; }(10, 20);

    [](int x, int y){ cout << "Sum is " << x + y << endl; }(10, 20);

    cout << ([](int x, int y){ return x + y; }(10, 30))<< endl;

    // Mentioning the return type
    int a = [](int x, int y) -> int{ return x + y; }(20, 30);
    cout << a << endl;

    int c = 15;
    [c](){ cout << c << endl; }();

    // int d = 25;
    // auto f = [d](){cout << d <<endl;};
    // f();
    // d++;
    // f();

    // d value doesnt change in 2nd f(), to make it happen make the auto f capable of accessing d
    // auto f = [&d](){cout << d <<endl;};

    // SENDING LABDA EXPR TO A FUNCTION AS A PARAMETER
    int d = 25;
    auto f = [&d](){ cout << d++ << endl;};

    fun(f);
    fun(f);

    return (0);
}