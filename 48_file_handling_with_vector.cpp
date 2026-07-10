//example on file handling with vector library

// to store the data from user input array to file

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<int>arr(5);
    cout<<"Enter the input : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    };
    // now we will open the file

    ofstream fout;
    fout.open("48_example.txt");

    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";

    };

    fout.close();

    cout<<endl<<"Data stored in the file completed";
    return 0;
}