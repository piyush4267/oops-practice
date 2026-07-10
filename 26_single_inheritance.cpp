//example on single inheritance (ii)
#include <iostream>
using namespace std;
class baseclass
{
    protected:
    string name;
    int age;

    public:
    baseclass(string name,int age)  //creating constructor in base-class
    {
        this-> name =name;
        this->age=age;
    }
    void display()
    {
        cout<<"I am base-class"<<endl;
    }
};
//derived class->
class derivedclass : public baseclass
{
    int roll_no,id;
    public:  //creating constructor
    derivedclass(string name,int age,int roll_no,int id) : baseclass(name,age)   //mention baseclass data here
    {
        this->roll_no=roll_no;
        this->id=id;
    }
    void display()
    {
        cout<<"This is derived-class"<<endl;
        cout<<"Name : "<<name<<" "<<"Age : "<<age<<" "<<"Roll No : "<<roll_no<<" "<<"ID : "<<id<<endl;
    }
};
int main()
{
    derivedclass A("Piyush",19,69,1234);
    A.baseclass::display(); //called through base class
    A.display();
    
    return 0;
}