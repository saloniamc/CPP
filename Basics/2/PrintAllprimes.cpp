#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int i;

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

// Function to print all primes
void PrintAllPrimes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    PrintAllPrimes(n);

    /*if (isPrime(n))
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }*/

    return (0);
}