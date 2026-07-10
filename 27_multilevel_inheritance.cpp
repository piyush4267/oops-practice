//example on multilevel inheritance
#include <iostream>
using namespace std;
class person
{
    protected:
    string name;
    public:
    void introduction()
    {
        cout<<"My name is "<<name<<endl;
    }
};
class employee : public person
{
    protected:
    int salary;
    public :
    void monthly_salary()
    {
        cout<<"My monthly salary is : "<<salary<<endl;
    }
};
class manager : public employee
{
    public:
    string department;
    //creating constructor 
    manager (string name,int salary , string department)
    {
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
    void work()
    {
        cout<<"I am leading the department of "<<department<<endl;
    }
};
int main()
{
    manager A1("Piyush",300000,"CSE");
    A1.introduction();
    A1.monthly_salary();
    A1.work();
    return 0;
}