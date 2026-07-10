//example of file handling
//reading data from a file
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Object create kara ga using ifstream class and object ka name is 'readfile' here

    ifstream readfile;
    readfile.open("46_example.txt");
    //now file read karna hai

    char c;   //read character
    readfile>>c;
    while(! readfile.eof())
    {
        cout<<c;
        readfile>>c;

    };
    readfile.close();

    cout<<endl<<"File readed successfully"<<endl;
    return 0;
}

//the problem is here it doesnot read the space character so there is no any space get printed in the output
//check example 47_file_handling.cpp for modified code