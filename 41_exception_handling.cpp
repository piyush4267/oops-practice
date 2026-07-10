//example on exception handling 
#include <iostream>
#include <exception>
using namespace std;


int main()
{
    try {
        int *ptr = new int[10000000000000000];
        cout<<"Memory allocation is successfully"<<endl;
        delete []ptr;
    }
    catch(const exception &e)  //exception is a class
    {
        cout<<"Exception Occured due to line 10 : "<<e.what()<<endl;
    }
    return 0;
}