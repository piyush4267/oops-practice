//example on exception handling (method-2 using keywords)
#include <iostream>
using namespace std;

class customer
{
    string name;
    int balance , account_num;

    public:
    customer(string name , int balance , int account_num)
    {
        this -> name=name;
        this->balance=balance;
        this->account_num=account_num;
    }
    //deposit
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance += amount;
            cout<<amount<<" is credited successfully"<<endl;
        }
        else
        {
            throw "Amount should be > 0 "; //throw keyword used
        }
    }
    //withdraw
    void withdraw(int amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance -= amount;
            cout<<amount<<" is debited successfully"<<endl;
        }
        else if(amount<0)
        {
            throw "Amount should be > 0"; //throw keyword used
        }
        else
        {
            throw "Your balance is low";  //throw keyword used
        }
    }
};
int main()
{
    customer C1("Piyush",5000,100);
    //handling the exception using try keyword
    try
    {
    C1.deposit(500);
    C1.withdraw(6000);
    C1.deposit(100);
    }
    catch(const char *error)   //error pointer is the pointer which will show the error (error pointer is customizable)
    {
        cout<<"Exception Occured : "<<error<<endl;
    }
    return 0;
}