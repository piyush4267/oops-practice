//example on file handling with vector library

// to store the data from user input array to file and sort the data in ascending order

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> //Header file for standard sorting algorithms

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
    fout.open("49_example.txt");
    fout<<"Original Data"<<endl;

    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";

    };

    fout<<endl<<"Sorted Data"<<endl;

    //now data sorting

    sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    };

    fout.close();

    cout<<endl<<"Data stored in the file completed and sorted successfully";
    return 0;
}