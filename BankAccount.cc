#include <iostream>
#include <string>
#include <fstream> //allows us to use filestream
#include <vector> //for vectors
#include "BankAccountRecords.h" //header file

using namespace std;

int main()
{
    // VARS
    string firstname;
    string lastname;
    double amount;
    int AccountNums;
    const int MaxNumAccounts = 100;
    string filename;
    int countAccounts = 0;

    // GET THE FILE NAME OF THE FILE WE WILL BE READING FROM
    cout << "Enter in the name of the file that we will be reading from below:" << endl;
    cin >> filename;

    // For input errors when file open.
    ifstream inputFile(filename);
    if (!inputFile)
    {
        cout << "ERROR: The file cannot open. Try again." << endl;
    }

    // use a vector to store objects from BankAccountRecord
    vector<BankAccountRecord> records;

    
    while (countAccounts < MaxNumAccounts && inputFile >> lastname >> firstname >> amount >> AccountNums)
    {
        records.push_back(BankAccountRecord(firstname, lastname, amount, AccountNums));
        countAccounts++;
    }

    // loop
    for (int idx = countAccounts - 1; idx >= 0; idx--)
    {

        records[idx].printInfo(); // call my printInfo function
    }

    // Close file
    inputFile.close();


    // ALL WELL :D
    return 0;
}