//week 12 program 1	
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;

public:
    // Default Constructor
    Student()
    {
        rollNo = 101;
        marks = 85;
    }

    // Member function
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    cout << "Student Details:" << endl;
    s1.display();

    return 0;
}

