//example on manual copy constructor through a banking system.
#include <iostream>
using namespace std;
class customer{
    string name;
    int account_no;
    int balance;
    //making constructor.
    public :
    customer(string n,int a,int b)  //this is Parameterized Constructor.
    {
        name = n;
        account_no = a;
        balance = b;
    }
    //now creating copy constructor by taking same constructor name and using refrence of B
    //use constant always
    customer (const customer &B){
        name = B.name;
        account_no = B.account_no;
        balance = B.balance;
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
    cout<<"Parameterized Constructor"<<endl;
    customer obj1("Piyush",4267,1000);
    customer obj2("Infy",1234,999);
    obj1.show();
    obj2.show();
    
    cout<<"------------------------------------------------"<<endl<<"Copy Constructor"<<endl;
    
    //customer obj3(obj1);   //here we use copy constructor to copy the object 1 data to new object 3. //This method is also right
    //obj3.show();
    //We can also call by this 
    customer obj3 = obj1;
    obj3.show();
    return 0;
}