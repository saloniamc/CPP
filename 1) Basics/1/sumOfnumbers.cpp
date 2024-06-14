#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1;
    int sum = 0;

    while (i <= N)
    {
        sum = sum + i;
        i += 1;
    }

    cout << sum << endl;
    return (0);

}