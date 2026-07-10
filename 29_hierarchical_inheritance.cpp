//example on hierarchical inheritance
#include <iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:
     //need to create default constructor otherwise it will provide error
     Human()
     {

     };
     Human(string name,int age)
     {
        this->name=name;
        this->age=age;
     }
     void display()
     {
        cout<<"Name : "<<name<<" "<<"Age : "<<age<<" "<<endl;

     }
};
class student : public Human
{
    int roll_no,id;

    public:
    student(string name,int age,int roll_no,int id) : Human(name,age)
    {
        this->roll_no=roll_no;
        this->id=id;
    }
    void display()
    {
        cout<<"Name : "<<name<<" | Age : "<<age<<" | Roll No : "<<roll_no<<" | ID : "<<id<<endl;
    }
};

class teacher : public Human
{
    int salary;
    public:
    teacher(int salary,int age,string name)
    {
        this->salary=salary;
        this->age=age;
        this->name=name;
    }
    void display()
    {
        cout<<"Name : "<<name<<" | Salary : "<<salary<<" | Age : "<<age<<endl;
    }

};
int main()
{
    student A1("Piyush",19,69,1234);
    A1.display();
    teacher A2(1000,25,"Infy");
    A2.display();
    return 0;
}