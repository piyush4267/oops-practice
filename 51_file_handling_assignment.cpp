//assignment 

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //Creating a file with the data present -> 1 2 4 5 8 2
    //Initialize a vector with your values
    vector<int> arr = {1,2,4,5,8,2};

    ofstream file_edit;                      //using ofstream for writing data
    file_edit.open("51_assignment.txt");
    file_edit<<"Data Provided :"<<endl;
    for(int i=0;i<6;i++)
    {
        file_edit<<arr[i]<<" ";
    };
    file_edit.close();

    cout<<endl<<"Data stored / input successfully"<<endl;
    cout<<"----------------------------------"<<endl;

    //now we will read the data 

    cout<<"Now reading the data"<<endl;
    cout<<"----------------------------------"<<endl;
    
    ifstream file_read;
    file_read.open("51_assignment.txt");
    string letters;

    while(getline(file_read,letters))
    {
        cout<<letters<<endl;
    };
    file_read.close();

    cout<<"\nStored Data readed successfully"<<endl;
    cout<<"----------------------------------"<<endl;

    //now sorting the data

    file_edit.open("51_assignment.txt",ios::app);   //ios::app -: Moves the internal write pointer to the very end of the existing text file, ensuring old content is safe from deletion.
    file_edit<<"\nSorted Data :"<<endl;
 
    sort(arr.begin(),arr.end());                   //Note: This sorting function only work with vector initilization
    //For int arr[] type , the sorting function is sort(begin(arr),end(arr));
    for(int i=0;i<6;i++)
    {
        file_edit<<arr[i]<<" ";
    };
    file_edit.close();

    //now reading the new sorted stored data

    cout<<"Data sorted successfully"<<endl;
    cout<<"Sorted Data is : "<<endl;
    cout<<"----------------------------------"<<endl;
    
    //reopening the file for reading 

    file_read.open("51_assignment.txt");
    while(getline(file_read,letters))
    {
        cout<<letters<<endl;
    };
    file_read.close();

    cout<<"Assignment Completed"<<endl;
}