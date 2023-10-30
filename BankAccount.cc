#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "BankAccountRecords.h"
//ask dr.wiegand

using namespace std;

int main()
{
    //VARS
    string firstname; 
    string lastname; 
    double amount; 
    int AccountNums; 
    const int MaxNumAccounts = 100; 
    string filename; 
    int countAccounts = 0; 
    
    //GET THE FILE NAME OF THE FILE WE WILL BE READING FROM
    cout << "Enter in the name of the file that we will be reading from below:" << endl; 
    cin >> filename; 

    //For input errors when file open. 
    ifstream inputFile(filename); 
    if (!inputFile) {
        cout << "ERROR: The file cannot open. Try again." << endl; 
    }
    
    //for when end of file reached
    else if (inputFile.eof()) {
        cout << "End of the file" << endl; 
    }

    //use a vector to store objects from BankAccountRecord
    vector<BankAccountRecord> records; 

    while (countAccounts <= MaxNumAccounts && inputFile >> firstname >> lastname >> amount >> AccountNums) {
        records.push_back(BankAccountRecord(firstname, lastname, amount, AccountNums));
        countAccounts++;
    }

    //loop where 
    for (int idx = countAccounts - 1; idx >= 0; idx--) {
        
        records[idx].printInfo(); //call my printInfo function
    }


    //Close file 
    inputFile.close(); 


    //ALL WELL :D
    return 0;
}