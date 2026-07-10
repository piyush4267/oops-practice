//example on access-modifiers
#include <iostream>
using namespace std;
class baseclass{
    private :
    int a;
    protected :
    int b;
    public :
    int c;

};
int main()
{
    baseclass A1;
    //A1.a = 1;  //it is private thats why it will not accessible in main
   // A1.b = 2;  //it is protected thats why it will not accessible in main
    A1.c = 3;
    cout<<A1.c;
    return 0;
}