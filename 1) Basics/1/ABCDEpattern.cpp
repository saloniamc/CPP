#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int count = n - i + 1;
        char alphabet = 'A';
        for(int j = 1; j <= count; j++)
        {
            cout << alphabet;
            alphabet += 1;
        }
        cout << "\n";
    }

    return (0);
}