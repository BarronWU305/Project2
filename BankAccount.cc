#include <iostream>
#include <string>
#include <fstream>
#include <BankAccountRecords.h>

using namespace std;

int main()
{
    string firstname; 
    string lastname; 
    double amount; 
    int AccountNums; 
    const int MaxNumAccounts = 100; 
    string filename; 
    int countAccounts; 

    //GET THE FILE NAME OF THE FILE WE WILL BE READING FROM
    cout << "Enter in the name of the file that we will be reading from below:" << endl; 
    cin >> filename; 

    ifstream inputFile(filename); 
    if (!inputFile) {
        cout << "ERROR: The file cannot open. Try again." << endl; 
        return 1; //NOT IS ALL WELL!!
    }

    
    //ALL WELL :D
    return 0;
}