
/*****************8        Storing Object in an Output file           *************/



#include <iostream>
#include <fstream>

using namespace std;

class Student
{
public:
    string name;
    int rollno;
    string branch;

    // Overloading the insertion operator
    friend ofstream &operator<<(ofstream &ofs, Student &s);
};

ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.rollno << endl;
    ofs << s.branch << endl;

    return ofs;
}

int main()
{
    Student s;
    s.name = "Aditi";
    s.rollno = 1;
    s.branch = "CSE";

    ofstream ofs("Student.txt", ios::trunc);

    // Insertion Operator
    // ofs << s.name << endl;
    // ofs << s.rollno << endl;
    // ofs << s.branch << endl;

    // Instead of this is there any way in which we could store and retrieve the entire object in
    // the file ? Yes we can do that by overloading insertin operator

    ofs << s;

    ofs.close();

    return (0);
}