#include <iostream>
#include <memory>

using namespace std;

class rect
{
    int length;
    int breadth;
    public:
    rect(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    //               UNIQUE PTR
    // can point on only one object
    // unique_ptr<rect> ptr (new rect(10, 5));
    // cout << ptr->area()<< endl;

    // unique_ptr<rect> ptr1;
    // ptr1 = move(ptr);
    // cout << ptr1->area()<< endl;


    //            SHARED PTR
    shared_ptr<rect> ptr (new rect(10, 5));
    cout << ptr->area()<< endl;

    shared_ptr<rect> ptr1;
    ptr1 = ptr;
    cout << ptr1->area()<< endl;
    cout << ptr->area()<< endl;
    cout << ptr.use_count() << endl;   // Number of objects which points this object



   
   return (0);
}