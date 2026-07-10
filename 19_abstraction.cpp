//example of abstraction
//abstraction - displaying essential information and hiding the details

#include <iostream>
using namespace std;
class customer {
    string name;
    int balance;
    public :
    customer (string a,int b)
    {
        name = a;
        balance = b;

    }
    void deposit (int amount)
    {
        if(amount>0)
        {
            balance += amount;
        }
    }
    void display()
    {
        cout<<"Name : "<<name<<endl<<"Balance : "<<balance<<endl;
    }
};
int main()
{
    customer A1("Piyush",5000);
    A1.display(); //before deposit
    A1.deposit(2000);
    A1.display(); //after deposit
    return 0;
}