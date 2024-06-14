#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m; // You can keep your own classes too in place of string
    m.insert(pair<int, string>(1, "Saloni"));
    m.insert(pair<int, string>(2, "Aditi"));
    m.insert(pair<int, string>(3, "Arshi"));

    // To iterate
    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    // Finding a pair of value through key value
    map<int, string>::iterator itr1;
    itr1 = m.find(1);
    cout << itr1->first << " " << itr1->second << endl;

    return (0);
}