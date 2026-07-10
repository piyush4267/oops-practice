//lets talk about the size of class and object
#include <iostream>
using namespace std;
class baseclass{
    int number;
    char name;
    
};
int main ()
{
    baseclass object1;
    cout<<sizeof(object1)<<" ";
}

/*
The size of an empty class in C++ is 1 byte because the compiler needs to allocate at least 1 byte of memory to each object. 
This is to ensure that each object has a unique address. 
If an empty class had a size of 0 bytes, then two different objects of the same class could have the same address, which would be a problem
*/

/*
The size of baseclass in  upper case is 8 (int and char) but we expected as 5 (4 for int + 1 for char)
this happen due to padding
*/
