#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int N, binary;
    cin >> N;

    while(N > 0)
    {
        cin >> binary;
        int rem ,i = 0, sum = 0;
        while(binary != 0)
        {
            rem = binary%10;
            sum = sum + rem * pow(2, i);
            binary = binary / 10;
            i++;
        }
        
        cout << sum << endl;
        N = N - 1;
    }
    return (0);
}