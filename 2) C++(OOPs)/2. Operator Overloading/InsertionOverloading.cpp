#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
     Complex(int r = 0, int i = 0)
     {
        real = r;
        img = i;
     }

    // void display()
    // {
    //     cout << real << " + i" << img;
    // }

    // This insertion operator will take parameter 1. object of type ostream and
    // 2. object of class complex

    friend ostream & operator<<(ostream &o, Complex &c); // This function bis taking two different types of
                                                         // objects so this function cannot belong to complex class.
                                                         // ostream & , as it returns back the cout to be used in the
                                                         // same line ad the cout in the main.

                                                         // removing this ostream &, and the fn workd the same.
};

ostream & operator<<(ostream &o, Complex &c)    //ostream & , can be replaced by void and it works as the same.
{
    o << c.real << " + i" << c.img << endl;
    return o;                                   //then this needs to be commented out.
}

int main()
{
    Complex c1(3, 7);
    // int x = 10;
    // cout << x << endl;
    // c1.diplay();
    // Overload insertion operator
    cout<<c1;
    return (0);
}