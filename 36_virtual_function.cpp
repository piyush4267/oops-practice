//example on virtual function (ii)
#include <iostream>
#include <vector>
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
class Cat : public Animal
{
    public :
    void speak()
    {
        cout<<"Meow Meow"<<endl;
    }

};

int main()
{
    // Animal *p;   //creating pointer 
    // p = new Dog();
    // p->speak();

    Animal *p;
    vector<Animal*>animals;  //using vector
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i=0;i<animals.size();i++)
    {
        p = animals[i];
        p->speak();

    }
    //CLEANUP: Release all allocated heap memory
    for(int i = 0; i < animals.size(); i++)
    {
        delete animals[i]; 
    }
    return 0;
}

/*
-> We use a pointer vector (vector<Base*>) because it is the only way to store completely different child classes inside a single, unified list.

-> We use virtual functions alongside this vector because it ensures that when we loop through that list, C++ executes the actual,
specific child behavior (Dog::speak) instead of falling back to the generic base behavior (Animal::speak).

*/