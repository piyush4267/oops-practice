//if class is public we can access like this-
#include <iostream>
using namespace std;
class student {
    public :
    string name;
    int age;
    int roll_no;
    string grade;
    void show()
    {
        cout << "Name : " << name << " ";
        cout << "| Age : " << age << " ";
        cout << "| Roll No : " << roll_no << " ";
        cout << "| Grade : " << grade <<endl;
    }
};
int main ()
{
    student s1;
    s1.name = "Piyush";
    s1.age = 19;
    s1.roll_no = 118;
    s1.grade = "A";
    
    s1.show();

    student s2;
    s2.name = "Infy";
    s2.age = 19;
    s2.roll_no = 69;
    s2.grade = "A+";
    
    s2.show();
    return 0;
}
