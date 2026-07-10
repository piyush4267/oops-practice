//example on destructor
//desturctor syntax is -> ~[class_name or constructor_name].
#include <iostream>
using namespace std;
class base{
    string name;
    int *number;
    public :
    base(string n,int num)  //creating constructor
    {
        name = n;
        number = new int;
        *number = num;
    }
    ~base()               //creating destructor
    {
        
        cout<<"Destructor is called for number :"<<*number<<endl;
        delete number; // Frees the allocated integer on the heap
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Number : "<<*number<<endl; //// Added '*' to dereference and print the value instead of the address
        cout << "Memory Address : " << number << endl;
    }
};
int main ()
{
    base obj1("Infy",69);
    base obj2("Piyush",67);
    base obj3("XYZ",90);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}