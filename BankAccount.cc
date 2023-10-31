#include <iostream>
#include <string>
#include <fstream> //ALLOWS US TO USE FILESTREAM
#include <vector> //FOR VECTORS
#include "BankAccountRecords.h" //HEADER FILE

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

    // GET THE FILE NAME OF THE FILE WE WILL BE READING FROM
    cout << "Enter in the name of the file that we will be reading from below:" << endl;
    cin >> filename;

    // FOR INPUT ERRORS WHEN FILE OPEN
    ifstream inputFile(filename);
    if (!inputFile)
    {
        cout << "ERROR: The file cannot open. Try again." << endl;
    }

    // USE A VECTROR TO STORE OBJECTS FROM BANKACCOUNTRECORD
    vector<BankAccountRecord> records;

    //WHILE LOOP THROUGH INPUT FILE UNTIL THE MAX NUM OF ACCOUNTS IS REACHED OR NO MORE INPUT DATA.
    //THEN ADDS THESE OBJECTS TO RECORDS VECTOR.
    while (countAccounts < MaxNumAccounts && inputFile >> lastname >> firstname >> amount >> AccountNums)
    {
        records.push_back(BankAccountRecord(firstname, lastname, amount, AccountNums));
        countAccounts++;
    }

    //GO THROUGH RECORDS IN VECTOR IN REVERSE ORDER
    for (int idx = countAccounts - 1; idx >= 0; idx--)
    {

        records[idx].printInfo(); // CALL PRINT INFO
    }

    // CLOSES FILE
    inputFile.close();


    // ALL WELL
    return 0;
}