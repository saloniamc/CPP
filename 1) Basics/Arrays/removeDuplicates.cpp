#include <iostream>
#include <cstring>
using namespace std;

void removeDuplicates(char a[])
{
    int len = strlen(a);
    if (len == 1 || len == 0)
    {
        return;
    }
    int prev = 0;
    for (int current = 1; current < len; current++)
    {
        if (a[current] != a[prev])
        {
            prev++;
            a[prev] = a[current];
        }
    }
    a[prev + 1] = '\0';
    cout << a << endl;
}

int main()
{
    char a[1000];
    cin.getline(a, 1000);
    removeDuplicates(a);

    return (0);
}