#include <iostream>
#include <string>

using namespace std;

// Student is a new data type
class Student
{
public:
    string name;
    int rno;
    float gpa;

    // Default Constructor
    Student()
    {
        // Initializes with default values, though not explicitly shown in the code.
        // It could be name = "", rno = 0, gpa = 0.0;
    }

    // Parameterised Constructor (with one integer argument)
    Student(int r)
    {
        rno = r;
    }

    // Parameterised Constructor (with string and int arguments)
    Student(string s, int r)
    {
        name = s;
        rno = r;
    }

    // Parameterised Constructor (with string, int, and float arguments)
    Student(string s, int r, float g)
    {
        name = s;
        rno = r;
        gpa = g;
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
    // Creating Student objects with various constructors

    // 1. Parameterised Constructor (string, int)
    Student s1("Raghav Garg", 76);
    s1.gpa = 8.2; // gpa is assigned separately

    // 2. Default Constructor
    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.gpa = 6.2;

    // 3. Parameterised Constructor (string, int, float)
    Student s3("Gagan", 13, 9.2);

    // 4. Parameterised Constructor (int)
    Student s4(45);
    // name and gpa are uninitialised

    // 5. Parameterised Constructor (int, float, string)
    Student s5(34, 5.3, "Harish");

    // 6. Copy Constructor (implicit, deep copy)
    Student s6 = s1;
    s6.name = "Manish";

    // 7. Copy Constructor (implicit, deep copy)
    Student s7(s1);
    s7.name = "Vijay";

    // Printing the details of all Student objects
    cout << s1.name << " " << s1.gpa << " " << s1.rno << endl;
    cout << s5.name << " " << s5.gpa << " " << s5.rno << endl;
    cout << s2.name << " " << s2.gpa << " " << s2.rno << endl;
    cout << s3.name << " " << s3.gpa << " " << s3.rno << endl;
    cout << s6.name << " " << s6.gpa << " " << s6.rno << endl;
    cout << s7.name << " " << s7.gpa << " " << s7.rno << endl;

    return 0;
}