#include <iostream>

using namespace std;

class Test
{
    int x = 10;
    int y = 25;
    public:
    Test(int a, int b)
    {
        x = a;
        y = b;
    }

    Test():Test(1, 1);


};

int main()
{
    return (0);
}