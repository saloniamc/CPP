#include <iostream>
using namespace std;

int main()
{
    int N = 560121;
    int sum = 0;
    int rem;
    while (N != 0)
    {
        int rem = N % 10;
        sum = sum + rem;
        N = N / 10;
    }

    cout << sum << endl;

    return (0);
}