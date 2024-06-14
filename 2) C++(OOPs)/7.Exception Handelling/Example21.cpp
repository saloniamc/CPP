#include <iostream>
using namespace std;

class MyException1 : exception
{

};

class MyException2 : public MyException1
{

};

int main(0)
{
    try
    {
        throw MyException1();
    }
    catch(MyException2 e)          // When you have exception classes inside catch block 
                                   // then you should have child class first then the parent class
                                // Because parent class exception can handle child class's exception too
    {
        //
    }
    catch(MyException1 e)
    {
        //
    }
    catch(...)
    {
        //All catch handler must be at the last.
    }
    

    return(0);

}