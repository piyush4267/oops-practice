//example on derived class if base class is public and derived class is private.
//example on derived class  (protected mode)
#include <iostream>
using namespace std;
class base {
    public :                 
    string name;
    int age,weight;
};
//now creating derived class using base class 'base'
class derived : private base      //it is private and base class is public so whole will act as private 
{
    private :
    int roll_no,fee;
    public :
    void fun(string n,int a,int w)
    {
        name  = n;
        age = a;
        weight = w;
    }
    void display()
    {
        cout<<"Name : "<<name<<" | Age : "<<age<<" | Weight : "<<weight<<endl;
    }
};
int main()
{
    derived A1;
    A1.fun("Piyush",19,70);
    A1.display();
    return 0;
}