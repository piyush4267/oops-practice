//example on operator overloading
#include <iostream>
using namespace std;

class complex_num
{
    int real_num,imaginary_num;
    public:
    //need to make a default constructor
    complex_num()
    {

    }
    complex_num(int real_num, int imaginary_num)
    {
        this -> real_num = real_num;
        this -> imaginary_num = imaginary_num;
    }
    void display()
    {
        cout<<"Complex number is : "<<real_num<<" + i"<<imaginary_num<<endl;
    }
    //operator defining as a fucntion 
    complex_num operator + (complex_num &C)
    {
        complex_num ans;
        ans.real_num = real_num + C.real_num;
        ans.imaginary_num = imaginary_num + C.imaginary_num;
        return ans;
    }
};
int main()
{
    complex_num C1(3,4);
    complex_num C2(4,6);

    complex_num C3 = C1+C2;
    C3.display();
    return 0;
}