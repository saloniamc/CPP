#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex operator+(Complex x) // either c1 or c2 does the adding
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;

        return temp;
    }
};

int main()
{

    Complex c1, c2, c3;
    c1.real = 5;
    c1.img = 3;
    c2.real = 18;
    c2.img = 7;

    c3 = c1 + c2;

    cout << c3.real << " + i" << c3.img << endl;
    return (0);
}