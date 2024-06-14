#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Opening the file
    ifstream infile("My.txt");

    // Another method to open the file
    // ifstream ifs;
    // ifs.open("My.txt");



    // Check if file is opened
    if (infile)
    {
        cout << "File is open" << endl;
    }

    // Another method to check if the file is opened
    if (infile.is_open())
    {
        cout << "Using is_open() funcion" << endl;
    }

    string name;
    int rollno;
    string branch;

    infile >> name >> rollno >> branch;

    cout << "Name : " << name << endl;
    cout << "Roll no : " << rollno << endl;
    cout << "Branch : " << branch << endl;

    return (0);
}