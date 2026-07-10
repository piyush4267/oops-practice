//example on inheritance 
#include <iostream>
using namespace std;
class Human{
    string religion , colour;
    protected :
    string name;
    int age,weight;
};

//making derived class
class Student : private Human {
    private :
    int roll_no , id;
    public :
    Student (string name,int age , int weight,int roll_no,int id)
    {
        this -> name = name;
        this -> age = age;
        this -> weight = weight;
        this -> roll_no = roll_no;
        this -> id = id;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Weight : "<<weight<<endl;
        cout<<"Roll No : "<<roll_no<<endl;
        cout<<"ID : "<<id<<endl;
    }
};
int main ()
{
    Student A("Piyush",19,70,69,1234);
    A.display();
    return 0;
}