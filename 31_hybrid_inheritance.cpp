//example on hybrid inheritance
#include <iostream>
using namespace std;

class student
{
    public :
    void print()
    {
        cout<<"I am a student"<<endl;
    }
};
class male
{
    public:
    void printmale()
    {
        cout<<"I am male"<<endl;
    }
};
class female 
{
    public:
    void printfemale()
    {
        cout<<"I am female"<<endl;
    }
};

class boy : public student , public male
{
    public:
    void printboy()
    {
        cout<<"I am a boy"<<endl;
    }
};

class girl : public student,public female
{
    public:
    void printgirl()
    {
        cout<<"I am a girl"<<endl;
    }
};

int main()
{
    boy b1;
    b1.print();
    b1.printmale();
    b1.printboy();

    girl g1;
    g1.print();
    g1.printfemale();
    g1.printgirl();
    return 0;
}
