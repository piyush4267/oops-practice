//example on file handling
//writing data in a file
#include <iostream>
#include <fstream> //header file

using namespace std;

int main()
{
    //file open karne ke liya
    //Object create kara ga using ofstream class and object ka name is 'fileopen' here

    ofstream fileopen;
    fileopen.open("45_example.txt");    //open is member function here 
    //Hamasa file ka path hi diya karo (its better)
    //Now writing the data in that text file

    fileopen<<"Hello Infy"<<endl<<"This is an example for writing data in a file";
    fileopen.close();   //always close the file it help in to release resoruces
    cout<<"File Modified"<<endl;
    return 0;
}