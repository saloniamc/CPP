#include <iostream>
#include <cstdarg> // Include the cstdarg header for variadic functions

using namespace std;

int sum(int n, ...)
{
    va_list list;
    va_start(list, n);

    int x;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        x = va_arg(list, int);
        sum += x;
    }

    return sum;
}

int main()
{
    cout << sum(10, 1,2, 3, 4, 5, 6, 7, 8, 9, 10);
    return (0);
}