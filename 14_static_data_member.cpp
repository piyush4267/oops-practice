//example on Static Data-member
#include <iostream>
using namespace std;
class customer {
    string name;
    int number;
    static int total_customer_count; //we use static here for count total customer
    public :
    customer (string n,int num)
    {
        name = n;
        number = num;
        total_customer_count++;
    }
    static void totalcustomer()
    {
        cout<<"Total Customer : "<<total_customer_count<<endl;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Number : "<<number<<endl;
        cout<<"Total customer count : "<<total_customer_count<<endl;
    }

};
int customer :: total_customer_count = 0;
int main ()
{
    customer A1("Piyush",69);
    customer A2("Infy",67);
    A1.display();
    A2.display();
    cout<<"-----------------------------------"<<endl;

    customer :: totalcustomer();
    return 0;
}
