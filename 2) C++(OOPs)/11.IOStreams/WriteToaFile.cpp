#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream ofs("My.txt", ios::trunc);
    ofs << "Saloni" << endl;
    ofs << "22" << endl;
    ofs << "CSE" << endl;

    ofs.close();
    return (0);
}