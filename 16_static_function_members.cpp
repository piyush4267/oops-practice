//example on static function members
//they are attributes of classes or class member
#include <iostream>
using namespace std;

class customer{
    string name;
    int number;
    static int total_customer; //used static here , hame sablog ke liya same dikhna hai to ham static use kara ga

    public:
    customer(string name,int number)
    {
        this->name = name;
        this->number = number;
        total_customer ++; //jitna object create hoga utna ye increment hote raha ga
    }
    void display ()
    {
        cout<<name<<" "<<number<<" "<<total_customer<<endl;
    }
    static void display_total()   //we used static member function here which directly via the class blueprint
    {
        cout<<"Total Customer : "<<total_customer<<endl;
    }
};
int customer :: total_customer = 0;

int main()
{
    customer A1("Piyush",69);
    customer A2("Infy",67);
    customer A3("JODI",89);
    A1.display();
    A2.display();
    A3.display();
    A2.display_total(); //method -1 via object
    customer ::display_total(); //method - 2 via class name

    return 0;
}