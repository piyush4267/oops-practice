//example of file handling
//reading data from a file (it also read space character as a character)
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Object create kara ga using ifstream class and object ka name is 'readfile' here

    ifstream readfile;
    readfile.open("47_example.txt");
    //now file read karna hai

    char c;   //read character
    c = readfile.get();
    while(! readfile.eof())
    {
        cout<<c;
        c = readfile.get();

    };
    readfile.close();
    cout<<"\n------------------------";
    cout<<endl<<"File readed successfully"<<endl;
    return 0;
}
