#include <iostream>
using namespace std;

class Test
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend void fun();
};

void fun()
{
    Test t;
    t.a = 10;
    t.b = 39;
    t.c = 20;

}

int main()
{
    fun();
    return (0);
}