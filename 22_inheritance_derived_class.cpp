// example on derived class if it is in public mode
#include <iostream>
using namespace std;

class base
{
public: // Made public to show the mode switch clearly
    string school = "Thapar University";

protected:
    string name;
    int age, weight;
};

// Mode changed to PUBLIC inheritance
class derived : public base
{
private:
    int roll_no, fee;

public:
    void fun(string n, int a, int w)
    {
        name = n;   // OK: stays protected inside child
        age = a;    // OK: stays protected inside child
        weight = w; // OK: stays protected inside child
    }
    void display()
    {
        cout << "Name : " << name << " | School : " << school << endl;
    }
};

int main()
{
    derived A1;
    A1.fun("Piyush", 19, 70);
    A1.display();

    // With PUBLIC inheritance, public elements of base are accessible here!
    cout << "Direct School Access: " << A1.school << endl;

    // A1.name = "Rahul"; // ERROR: Still protected, main can't touch it.
    return 0;
}