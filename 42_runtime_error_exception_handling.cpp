//example on runtime error
//example on exception handling
#include <iostream>
#include <stdexcept> // Mandatory header for runtime_error
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
        if(amount<=0)
        {
            throw runtime_error ("Amount should be > 0");    //runtime_error is also a class
        }
        balance += amount;
        cout<<amount<<" is credited successfully"<<endl;
        
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
            throw runtime_error("should be > 0"); //throw keyword used
        }
        else
        {
            throw runtime_error("Your balance is low");  //throw keyword used
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
    catch(const runtime_error &error)   //error pointer is the pointer which will show the error (error pointer is customizable)
    {
        cout<<"Exception Occured : "<<error.what()<<endl;
    }
    //we can used multiple catch
    //this is default catch if no any other case arrise then it will work
    catch(...)
    {
        cout<<"Exception Occured"<<endl;
    }

    return 0;
}

/*
1. Specific to General Order
C++ matches catch blocks from top to bottom. The compiler searches for the closest specific match first.
Therefore, your most specific exceptions (like runtime_error) must always sit at the top, 
and your most generic exceptions (like the default catch(...)) must sit at the absolute bottom.

2. The Trap of Putting catch(...) First
If you place catch(...) at the top of your list, it will instantly swallow every single exception thrown, 
making all the specific catch blocks beneath it completely unreachable.
In fact, modern compilers will flag this as a hard error and refuse to compile.
*/