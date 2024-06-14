#include <iostream>
using namespace std;

// class Demo
// {
// public:
//     int x = 10;

//     void display() const
//     {
//         x++;                 *** error: increment of member 'Demo::x' in read-only object
//         cout << x;
//     }
// };




// void fun(const int &x, int &y)
// {
//     x++;                     *** error: increment of read-only reference 'x'
//     cout << x << " " << y;
// }




int main()
{
    //   const int x = 10;  OR  int const x = 10      BOTH are same
    //   x++;                *** error: increment of read-only variable 'x'

    //    const int x = 10;
    //    int* ptr = &x;        error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
    //    ++(*ptr);
    //    cout << *ptr;

    // const int x = 15;
    // const int* ptr = &x;
    // ++(*ptr);               error: increment of read-only location '* ptr'
    // cout << *ptr;

    // int x = 10;
    // int *const ptr = &x;
    // int y = 20;
    // ptr = &y;               error: assignment of read-only variable 'ptr'
    // cout << *ptr;

    // Demo d;
    // d.display();



    int a = 10, b = 20;
    fun(a, b);

    return (0);
}