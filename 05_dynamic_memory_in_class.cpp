//example on using dynamic memory in class
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
   student *student1 = new student; //making dynamic memory and using pointer as student1
   student1 -> name ="Piyush";
   student1->age = 19;
   student1->roll_no = 118;
   student1->grade="A";

   student1->show();

   //you can also write like this both is correct 

   (*student1).name = "Infy";
   (*student1).age = 19;
   (*student1).roll_no = 69;
   (*student1).grade = "A+";
   
   (*student1).show();
   delete student1; //Frees the allocated heap memory back to the system
   return 0;
}
