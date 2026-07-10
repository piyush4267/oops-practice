//if object is created dynamically.
#include <iostream>
using namespace std;
class base{
    string name;
    int number;
    public :
    base(string n,int num)
    {
        name = n;
        number = num;
        cout<<"Name : "<<name<<endl;
        cout<<"Number : "<<number<<endl;
    }
    ~base()
    {
        cout<<"Destructor is called for number : "<<number<<endl; 
    }
};
int main ()
{
    base *obj1 = new base("Infy",69);
    delete obj1;
    return 0;
}