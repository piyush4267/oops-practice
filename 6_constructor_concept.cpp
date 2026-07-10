//example on constructor through a banking system.
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
    }
    customer(string n,int a,int b)  //this is Parameterized Constructor.
    {
        name = n;
        account_no = a;
        balance = b;
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
    customer obj1("Piyush",4267,1000);
    customer obj2("Infy",1234,999);
    obj1.show();
    obj2.show();
    
    return 0;
}