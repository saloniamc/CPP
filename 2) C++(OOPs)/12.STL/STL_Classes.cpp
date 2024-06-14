#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};
    v.push_back(50);

    vector<int>::iterator itr;

    // USING FOR EACH LOOP
    for (int x : v)
    {
        cout << x << endl;
    }

    // USING ITERATOR - ITR IS A POINTER TYPE
    // for (itr = v.begin(); itr != v.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }
    
    // ITERATOR MODIFIES VALUES
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << ++*itr << endl;
    }

    return (0);
}


//************* THEORY ******************

1. You can replace <vector> with 
   a. list               - push_back()
   b. forward_list       - push_front()
   c. set                - insert()      you acnnot modify the values using iterator
