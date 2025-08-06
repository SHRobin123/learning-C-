#include <iostream>
#include <string>
#include <iomanip> // For std::left, std::setw, etc.

using namespace std;

class Student
{
public:
    string name;
    int rno;
    float gpa;

    // Default Constructor
    Student()
    {
        name = "";
        rno = 0;
        gpa = 0.0;
    }

    // Parameterised Constructor (with string, int, and float arguments)
    Student(string s, int r, float g)
    {
        name = s;
        rno = r;
        gpa = g;
    }

    // Parameterised Constructor (with string and int arguments)
    Student(string s, int r)
    {
        name = s;
        rno = r;
        gpa = 0.0;
    }

    // Parameterised Constructor (with int, float, and string arguments)
    Student(int r, float g, string s)
    {
        name = s;
        rno = r;
        gpa = g;
    }
};

int main()
{
    // Creating Student objects to produce the desired output

    // s1
    Student s1("Raghav Garg", 76);
    s1.gpa = 8.2;

    // s5
    Student s5(34, 5.3, "Harish");

    // s2
    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.gpa = 6.2;

    // s3
    Student s3("Gagan", 13, 9.2);

    // s6 - Copy of s1
    Student s6 = s1;
    s6.name = "Manish";

    // s7 - Copy of s1 using copy constructor syntax
    Student s7(s1);
    s7.name = "Vijay";

    // Printing the header
    cout << left << setw(20) << "Name" << setw(10) << "GPA" << "Roll_No" << endl;

    // Printing the details of all Student objects as per the required sequence
    cout << left << setw(20) << s1.name << setw(10) << s1.gpa << s1.rno << endl;
    cout << left << setw(20) << s5.name << setw(10) << s5.gpa << s5.rno << endl;
    cout << left << setw(20) << s2.name << setw(10) << s2.gpa << s2.rno << endl;
    cout << left << setw(20) << s3.name << setw(10) << s3.gpa << s3.rno << endl;
    cout << left << setw(20) << s6.name << setw(10) << s6.gpa << s6.rno << endl;
    cout << left << setw(20) << s7.name << setw(10) << s7.gpa << s7.rno << endl;

    return 0;
}