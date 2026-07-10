//if class is private we can access like this by calling function-
#include <iostream>
using namespace std;
class student {
    private :
    string name;
    int age;
    int roll_no;
    string grade;
    public :
    void setshow(string n,int a,int r,string grd)
    {
        name = n;
        age = a;
        roll_no = r;
        grade = grd;
    }
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
    s1.setshow("Piyush",19,118,"A");
    // s1.age = 19;
    // s1.roll_no = 118;
    // s1.grade = "A";
    
    s1.show();

    student s2;
    s2.setshow("Infy",19,69,"A+");
    // s2.age = 19;
    // s2.roll_no = 69;
    // s2.grade = "A+";
    
    s2.show();
    return 0;
}
