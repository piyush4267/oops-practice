//example on static member function
//example based on banking system-
#include <iostream>
using namespace std;
class customer {
    string name;
    int account_num;
    int balance;
    static int total_customer;
    static int total_balance;

    public :
    customer (string n,int acc_no,int bal)
    {
        name =n;
        account_num = acc_no;
        balance = bal;
        total_customer ++;
        total_balance = total_balance + balance;
    }
    static void display_total()
    {
        cout<<"Total Customer : "<<total_customer<<endl;
        cout<<"Total Balance : "<<total_balance<<endl;
    }
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance += amount;
            total_balance += amount;
        }
    }
    void withdraw(int amount)
    {
        if(amount <= balance && amount > 0)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }
    void display ()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Account Number : "<<account_num<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};
int customer :: total_customer = 0;
int customer :: total_balance = 0;
int main()
{
    customer A1("Piyush",6969,5000);
    A1.display(); //before deposit 
    A1.deposit(800);
    A1.display(); //after deposit
    customer::display_total();
    A1.withdraw(5000);
    customer::display_total();
    A1.display();//after withdrawn of 5000
    return 0;
}