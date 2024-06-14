#include <iostream>
using namespace std;


template <class T>   //Defining class T of type template
class stack
{
private:
    T *stk;
    int top;
    int size;

public:
//Constructor
    stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};

template <class T>
void stack<T>::push(T x)   //making it as a template
{
    if(top == size-1)
    {
        cout<<"Stack overflow";
    }
    else{
        top++;
        stk[top] = x;
    }
}


template <class T>
T stack<T>::pop()
{
    int x = 0;
    if(top == -1)
    {
        cout <<"Stack is empty";
    }else{
        x = stk[top];
        top--;
    }
    return x;
}

int main()
{
    stack<int> s(10);
    s.push(6);
    s.push(29);
    s.push(50);
    s.pop();
    s.pop();
    s.pop();

    return (0);
}






/*
#include <iostream>
using namespace std;

class stack
{
private:
    int *stk;
    int top;
    int size;

public:
//Constructor
    stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new int[size];
    }
    void push(int x);
    int pop();
};
void stack::push(int x)
{
    if(top == size-1)
    {
        cout<<"Stack overflow";
    }
    else{
        top++;
        stk[top] = x;
    }
}

int stack::pop()
{
    int x = 0;
    if(top == -1)
    {
        cout <<"Stack is empty";
    }else{
        x = stk[top];
        top--;
    }
    return x;
}

int main()
{
    stack s(10);
    s.push(6);
    s.push(29);
    s.push(50);
    s.pop();
    s.pop();
    s.pop();

    return (0);
}   */