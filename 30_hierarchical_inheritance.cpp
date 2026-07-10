//example of hierachical inheritance without need of default constructor 
#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    // We only need the parameterized constructor now!
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    
    void display()
    {
        cout << "Name : " << name << " Age : " << age << endl;
    }
};

class student : public Human
{
    int roll_no, id;

public:
    // Explicitly routes details up to Human constructor
    student(string name, int age, int roll_no, int id) : Human(name, age)
    {
        this->roll_no = roll_no;
        this->id = id;
    }
    
    void display()
    {
        cout << "Name : " << name << " | Age : " << age << " | Roll No : " << roll_no << " | ID : " << id << endl;
    }
};

class teacher : public Human
{
    int salary;

public:
    // Upgraded to match student's initialization style!
    teacher(string name, int age, int salary) : Human(name, age)
    {
        this->salary = salary;
    }
    
    void display()
    {
        cout << "Name : " << name << " | Age : " << age << " | Salary : " << salary << endl;
    }
};

int main()
{
    student A1("Piyush", 19, 69, 1234);
    A1.display();
    
    teacher A2("Infy", 25, 1000);
    A2.display();
    
    return 0;
}