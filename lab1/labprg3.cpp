#include <iostream>
using namespace std;

class Student
{
    string studentName;
    int rollNo;
    string department;

public:
    Student(string n, int r, string d)
        : studentName(n), rollNo(r), department(d) {}

    void display()
    {
        cout << "\nStudent Name : " << studentName;
        cout << "\nRoll Number  : " << rollNo;
        cout << "\nDepartment   : " << department << endl;
    }
};

int main()
{
    Student st1("Vansh", 570, "CSE");
    Student st2("Arpit", 436, "CSE");

    st1.display();
    st2.display();

    return 0;
}