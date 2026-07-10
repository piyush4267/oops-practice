//if class is private we can access like this by calling function-
#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
    int roll_no;
    string grade;

public:
    // --- SETTERS ---
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        // Enforcing encapsulation allows you to validate data!
        age = a;
    }
    void setRollNo(int r)
    {
        roll_no = r;
    }
    void setGrade(string grd)
    {
        grade = grd;
    }

    // --- GETTERS / DISPLAY ---
    void show()
    {
        cout << "Name : " << name << " ";
        cout << "| Age : " << age << " ";
        cout << "| Roll No : " << roll_no << " ";
        cout << "| Grade : " << grade << endl;
    }
};

int main()
{
    student s1;
    // Setting values individually
    s1.setName("Piyush");
    s1.setAge(19);
    s1.setRollNo(118);
    s1.setGrade("A");
    s1.show();

    // If "Infy" gets a grade update later, you don't need to pass all arguments again:
    student s2;
    s2.setName("Infy");
    s2.setAge(19);
    s2.setRollNo(69);
    s2.setGrade("A+");

    s2.show();

    return 0;
}