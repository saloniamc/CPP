#include<iostream>
using namespace std;

class Your;
class My
{
    private: int a;
    protected: int b;
    public: int c;
    friend Your;
};

class Your
{
    public:
    My m;
    void fun()
    {
        m.a = 5;
        m.b = 10;
        m.c = 15;
    }
};

int main()
{
    return(0);
}