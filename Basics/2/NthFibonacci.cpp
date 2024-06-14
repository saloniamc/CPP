#include <iostream>
using namespace std;

int nthfibonacci(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 2; i++)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }

    return b;
}

int main()
{
    int n;
    cin >> n;
    cout << nthfibonacci(n) << endl;

    return (0);
}