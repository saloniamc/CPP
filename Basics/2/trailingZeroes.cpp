#include <iostream>
using namespace std;

int FindZeroes(int n)
{

    int ans = 0;
    for (int D = 5; n / D >= 1; D = D * 5)
    {
        ans += n / D;
    }
    return ans;
}

int main()
{
    long long int n;
    cin >> n;

    cout << FindZeroes(n) << endl;

    return (0);
}