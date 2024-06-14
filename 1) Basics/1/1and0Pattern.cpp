#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int value = i % 2 == 1 ? 1 : 0;
        for (int j = 1; j <= i; j++)
        {
            cout << value;
            value = 1 - value;
        }

        cout << "\n";
    }
    return (0);
}