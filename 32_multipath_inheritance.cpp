//example of multipath inheritance and used of virtual function
#include <iostream>
using namespace std;

class human
{
    public:
    string name;
    void display()
    {
        cout<<"My name is "<<name<<endl;
    }
};

class engineer : public virtual human
{
    public:
    string branch;

    void work()
    {
        cout<<"My branch is "<<branch<<endl;
    }
};

class youtuber : public virtual human
{
    public :
    int subscribers;
    void contentcreator()
    {
        cout<<"Total Subs "<<subscribers<<endl;
    }
};

class teacher : public youtuber , public engineer
{
    public :
    int salary;
    
    teacher (string n,string specs,int sub,int sal)
    {
        name = n;
        branch = specs;
        subscribers = sub;
        salary=sal;
    }
};

int main()
{
    teacher A1("Piyush","CSE",100000,300000);
    A1.display();
    return 0;
}