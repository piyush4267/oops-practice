//example on virtual function (i)
#include <iostream>
using namespace std;

class Animal
{
    public :
    virtual void speak()   //using virtual keyword
    {
        cout<<"HU HU HU"<<endl;
    }
};
class Dog : public Animal
{
    public :
    void speak()
    {
        cout<<"Bow Bow"<<endl;
    }
};

int main()
{
    Animal *p;   //creating pointer 
    p = new Dog();
    p->speak();
    return 0;
}


/*
Without virtual (Static Binding): The compiler looks at the pointer type, which is Animal*. 
It decides right then and there during compilation to call Animal::speak().
 Your output would look like a strange dog going "HU HU HU".

With virtual (Dynamic Binding): You tell the compiler, "Wait until the program is running to decide!" 
At runtime, C++ looks at the actual object the pointer is pointing to (which is a Dog object in heap memory). 
It dynamically routes the execution to Dog::speak()
*/