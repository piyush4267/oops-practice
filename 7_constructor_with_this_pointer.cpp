//use of this pointer through previous example.
#include <iostream>
using namespace std;
class customer{
    string name;
    int account_no;
    int balance;
    //making constructor.
    public :
    customer()                //this is Default Constructor.
    {
        cout<<"Constructor is called"<<endl;
        name = "Hello";
        account_no = 0001;
        balance = 6969;
    }
    customer(string name,int account_no,int balance)  //this is Parameterized Constructor.
    {
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
    }
    void show()
    {
        cout<<"Name : "<<name<<" ";
        cout<<"Account Number : "<<account_no<<" ";
        cout<<"Balance : "<<balance<<endl;
    }
};
int main ()
{
    customer objDefaultconstructor;
    objDefaultconstructor.show();

    cout<<"--------------------------"<<endl;
    
    customer obj1("Piyush",4267,1000);
    customer obj2("Infy",1234,999);
    obj1.show();
    obj2.show();
    
    return 0;
}
/*
By using this->name = name;, you are explicitly telling the compiler:
"Take the local parameter name and assign it to the name variable belonging to this specific object."
*/
/*
The this pointer is an implicit, hidden pointer passed automatically to every non-static member function and constructor in C++. 
It holds the exact memory address of the object that currently called the function.
*/