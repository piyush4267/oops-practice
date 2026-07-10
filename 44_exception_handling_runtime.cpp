//example on runtime_error 
//example on exception handling 
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    try{
    if(b==0)
    throw runtime_error("Divide by 0 is not possible");
    int c = a/b;
    cout<<c<<endl;
    }
    catch(const runtime_error &e)
    {
        cout<<"Exception Occured : "<<e.what()<<endl;
    }
    return 0;
}