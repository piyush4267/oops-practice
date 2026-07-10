//example of file handling
//example of combining Writing (ofstream) and Reading (ifstream) operations sequentially on the exact same file!
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("50_example.txt");
    fout<<"Hello Infy"<<endl;
    fout<<"Hello Piyush"<<endl;
    fout<<"Hello Infyyyyy"<<endl;
    fout.close();

    //to read the file  (if just need to read single line)

    ifstream fin;
    fin.open("50_example.txt");

    string line;

    while(getline(fin,line))  //getline function is used to read fin object and put it in the line
    {
        cout<<line<<endl;
    };
    fin.close();
    

    cout<<endl<<"-----------------"<<endl;
    cout<<"Read successfully"<<endl;


}