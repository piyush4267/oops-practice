//example on multiple inheritance 
#include <iostream>
using namespace std;
//base-class 1
class engineer
{
    public :
    string branch;

    engineer()    //default constructor
    {
        cout<<"Base-class 1 is called"<<endl;
    }
    void work()
    {
        cout<<"My Branch is "<<branch<<endl;
    }
};
//base-class 2
class youtuber
{
    public:
    int subscribers;

    youtuber()  //default constructor
    {
        cout<<"Base-class 2 is called"<<endl;
    }
    void contentcreator()
    {
        cout<<"Total Subscribers : "<<subscribers<<endl;
    }
};
//derived class (multiple inheritance)
class teacher : public engineer,public youtuber
{
    public:
    string name;
    teacher()  //default constructor 
    {
        cout<<"Derived class called"<<endl;
    }
    //creating constructor 
    teacher(string name,string branch,int subscribers)
    {
        this->name=name;
        this->branch=branch;
        this->subscribers=subscribers;
    }
    void showcase()
    {
        cout<<"My name is "<<name<<endl;
        work();
        contentcreator();
    }
};
int main()
{
    teacher A2;
    teacher A1("Piyush","CSE",100000);
    A1.showcase();
    return 0;
}


/*
->>>>        class teacher : public engineer, public youtuber
The compiler will always initialize engineer first, 
youtuber second, and then finally execute the teacher constructor body. 
If you were to swap them to public youtuber, public engineer, the execution order would instantly reverse!
*/