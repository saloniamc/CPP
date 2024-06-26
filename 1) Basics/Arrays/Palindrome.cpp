#include <iostream>
#include <cstring>
using namespace std;

bool ispalindrome(char a[])
{
    int i = 0;
    int j = strlen(a) - 1;

    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char a[1000];
    cin.getline(a, 1000);
    if (ispalindrome(a))
    {
        cout << a << " is a palindrome";
    }
    else
    {
        cout << a << " is not a palindrome";
    }
    return (0);
}