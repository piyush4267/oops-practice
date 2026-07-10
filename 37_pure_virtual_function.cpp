//example on pure virtual function or abstract class
//example on virtual function (ii)
#include <iostream>
#include <vector>
using namespace std;

class Animal
{
    public :
    virtual void speak() = 0; //Abstract class or pure virtual function  //using virtual keyword
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