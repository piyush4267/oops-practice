//example on custom exception handling runtime error
#include <iostream>
#include <stdexcept> // Mandatory header for runtime_error
using namespace std;

class invalidamounterror : public runtime_error
{
    public:
    invalidamounterror(const string &msg) : runtime_error(msg)
    {}
};

class insufficientamounterror : public runtime_error
{
    public :
    insufficientamounterror(const string &msg) : runtime_error(msg)
    {}
};
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
            throw invalidamounterror("Amount should be > 0");
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
            throw invalidamounterror("should be > 0"); //throw keyword used
        }
        else
        {
            throw insufficientamounterror("Your balance is low");  //throw keyword used
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
    catch(const invalidamounterror &error)   //error pointer is the pointer which will show the error (error pointer is customizable)
    {
        cout<<"Exception Occured : "<<error.what()<<endl;
    }
    //we can used multiple catch
    catch(const insufficientamounterror &error)
    {
        cout<<"Exception Occured :"<<error.what()<<endl;
    }
    //this is default catch if no any other case arrise then it will work
    catch(...)
    {
        cout<<"Exception Occured"<<endl;
    }

    return 0;
}