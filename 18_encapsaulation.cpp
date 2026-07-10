//example on encapsulation.
//encapsulation -> wrapping up of data and information in a single unit, while controlling access to them.
#include <iostream>
using namespace std;
class customer {
    string name;
    int balance;
    int account_num;

    public :
    customer (string a,int b,int c)
    {
        name = a;
        balance = b;
        account_num = c;
    }
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance += amount;
        }
        else{
            cout<<"Invalid deposit amount (amount must be > 0)"<<endl;
        }
    }
    void withdraw(int amount)
    {
        if(amount<=balance && amount >0)
        {
            balance -= amount;
        }
    }
    void display ()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Balance : "<<balance<<endl;
        cout<<"Account Number : "<<account_num<<endl;
    }
};
int main()
{
    customer A1("Piyush",5000,1001);
    A1.display(); //before deposit 
    A1.deposit(1500);
    A1.display();//after deposit.
    A1.withdraw(6499);
    A1.display();//after withdrawl of 6499
    return 0;
}