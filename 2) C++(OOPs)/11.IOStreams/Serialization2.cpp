#include <iostream>
#include <fstream>

using namespace std;

class Student
{
public:
    string name;
    int rollno;
    string branch;

    // Overloading the insertion operator for file OUTPUT stream
    //friend ofstream &operator<<(ofstream &ofs, Student &s);

    // Overloading the insertion operator for file INPUT stream
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};

ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name >> s.rollno >> s.branch;

    return ifs;
}

int main()
{
    Student s;

    ifstream ifs("Student.txt");

    ifs >> s;

    cout << "Name : " << s.name << endl;
    cout << "Roll no : " << s.rollno << endl;
    cout << "Branch : " << s.branch << endl;

    ifs.close();
    
    return (0);
}