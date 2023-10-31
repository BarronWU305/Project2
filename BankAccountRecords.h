#ifndef BANKACCOUNTRECORDS_H_
#define BANKACCOUNTRECORDS_H_

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccountRecord // CLASS
{
public:
    //
    BankAccountRecord(string inFirstName, string inLastName, double inAmount, int inAccountNum);

    string GetFirstName() const;
    void SetFirstName(string inFirstName);

    string GetLastName() const;
    void SetLastName(string inLastName);

    double GetAmount() const;
    void SetAmount(double inAmount);

    int GetAccountNum() const;
    void SetAccountNum(double inAccountNum);

    // FUNCTION TO PRINT DETAILS FROM BANKACCOUNTRECORD
    void printInfo() const;

protected:
    // DECLARE VARIABLES
    string FirstName;
    string LastName;
    double Amount;
    int AccountNum;
};

#endif