// AKA MACROS  OR SYMBOLIC CONSTANTS = Replace the contents before the compilation starts

#include <iostream>
using namespace std;

// #define x 10
// #define c cout

// #define SQR(x) (x * x)

// #define tostring(x) #x // Means enclose the parameter in double quotes

#define MAX(a, b) (a > b ? a : b)

int main()
{
    // c << x << endl;
    // return (0);

    // cout << SQR(5) ;
    // cout << tostring(hello);

    cout << MAX(10, 20);

    return(0);
}